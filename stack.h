#include <iostream>

using std::cout;
using std::endl;

#ifndef STACK_H
#define STACK_H


class Stack
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
        Stack();
        ~Stack();

        // display stack
        void display();

        // getter
        int getTop();

        // adding and removing
        void add(int data);
        void pop();
};

#endif // STACK_H
