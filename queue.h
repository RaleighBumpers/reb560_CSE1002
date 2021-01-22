#include <iostream>

using std::cout;
using std::endl;

#ifndef QUEUE_H
#define QUEUE_H


class Queue
{
    private:
        struct Node
        {
            int data;
            Node *next;
        };

        int size;
        Node *head, *tail;

    public:
        Queue();
        ~Queue();       

    // display queue
    void display();

    // getter
    int getTop();

    // adding and removing
    void add(int data);
    void pop();
};

#endif // QUEUE_H
