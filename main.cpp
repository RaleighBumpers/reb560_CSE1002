#include <iostream>

#include "stack.h"

using namespace std;

int main()
{
    Stack nums;

    // creates stack
    nums.add(9);
    nums.add(5);
    nums.add(1);
    nums.add(2);
    nums.add(6);
    nums.add(2);
    nums.add(3);
    nums.add(0);
    nums.add(6);
    nums.add(2);

    // displays
    nums.display();
    cout << endl;

    // removes some items
    nums.pop();
    nums.pop();
    nums.pop();
    nums.pop();

    // gets top of stack
    if(nums.getTop() == -1)
    {
        cout << "Error. No items in stack." << endl;
    }

    else
    {
        cout << "Current head: " << nums.getTop() << endl;
    }

    cout << endl;

    // displays
    nums.display();
    cout << endl;

    // removes rest of items
    nums.pop();
    nums.pop();
    nums.pop();
    nums.pop();
    nums.pop();
    nums.pop();

    // gets top of stack
    if(nums.getTop() == -1)
    {
        cout << "Error. No items in stack." << endl;
    }

    else
    {
        cout << "Current head: " << nums.getTop() << endl;
    }

    return 0;
}
