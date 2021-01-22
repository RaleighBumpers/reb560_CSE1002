#include "queue.h"

Queue::Queue()
{
    size = 0;
    head = nullptr;
    tail = nullptr;
}

Queue::~Queue()
{
    if(head != nullptr)
    {
        Node *temp;

        while(head != nullptr)
        {
            temp = head->next;

            // deletes head
            delete head;

            // goes to next element
            head = temp;
        }
    }
}
//display queue
void Queue::display()
{
    //temporary node to iterate thru items
    Node *temp = head;

    for(int i = 0; i < size; i++)
    {
        cout << "Item " << i << ": " << temp->data << endl;

        temp = temp->next;
    }
}
//adding and removing
void Queue::add(int data)
{
    //condition for empty queue
    if(size == 0)
    {
        //creates new node for head
        head = new Node;

        head->data = data;
        head->next = nullptr;

        //makes sure to allocate tail
        tail = head;
    }
    else
    {
        //stores previous tail
        Node *temp = tail;

        //creates new node
        tail = new Node;

        //sets data and link to old head
        tail->data = data;
        tail->next = temp;
    }
    //increments size
    size ++;
}
void Queue::pop()
{
    //emptying queue
    if(size == 1)
    {
        //deletes head
        delete head;

        //sets head and tail to null (safety's sake)
        head = nullptr;
        tail = nullptr;
    }

    //deleting just one object
    else
    {
        //stores old head to delete
        Node *temp = head;

        //reassigns head to next object
        head = head->next;

        //deletes old head
        delete temp;

    }

    size--;
}
