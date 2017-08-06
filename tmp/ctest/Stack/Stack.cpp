#include <iostream>
#include<stdlib.h>
using namespace std;

#include "Stack.h"

Stack::Stack()
:myTop(-1)
{};

bool Stack::empty() const
{
    return (myTop == -1);
}

void Stack::push(const StackElement & value)
{
    if (myTop < STACK_CAPACITY - 1)
    {
        ++myTop;
        myArray[myTop] = value;
    }
    else
    {
        cerr << "stackoverflow\n";
        exit(1);
    }
}

void Stack::display() const
{
    for (int i = myTop; i >= 0; i--)
        cout << myArray[i] << endl;
}

StackElement Stack::top() const
{
    if (!empty())
        return (myArray[myTop]);
    else
    {
        cerr << "stack empty";
        StackElement garbage;
        return garbage;
    }
}

void Stack::pop()
{
    if (!empty())
        myTop--;
    else
        cerr << "stack empty";
}

