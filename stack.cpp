#include "stack.h"

Stack::Stack()
{
    size = 0;
    head = nullptr;
    tail = nullptr;
}

Stack::~Stack()
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

//display stack
void Stack::display()
{
    //temporary node to iterate thru items
    Node *temp = head;

    for(int i = 0; i < size; i++)
    {
        cout << "Item " << i << ": " << temp->data << endl;

        temp = temp->next;
    }
}
//getter
int Stack::getTop()
{
    //checks if items are present
    if(head != nullptr)
    {
        return head->data;
    }

    //flag for no items
    //(only worls on positive items only stack)
    else
    {
        return -1;
    }
}
//adding and removing
void Stack::add(int data)
{
    //condition for empty stack
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
        //stores previous head
        Node *temp = head;

        //creates new node
        head = new Node;

        //sets data and link to old head
        head->data = data;
        head->next = temp;
    }
    //increments size
    size ++;
}
void Stack::pop()
{
    //if size is 1
    //deleting all items
    if(size == 0)
    {
        //deletes head
        delete head;

        //sets head and tail to null (safety's sake)
        head = nullptr;
        tail = nullptr;
    }
    else
    {
        //stores old head to delete
        Node *temp = head;

        //sets new head
        head = head->next;

        //deletes old head
        delete temp;

        //if we've reduced the size to 1 with this
        if(size == 2)
        {
            tail = head;

        }
    }
    //increments size
    size --;
}
