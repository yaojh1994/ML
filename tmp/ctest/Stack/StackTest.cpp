#include <iostream>
using namespace std;

#include "Stack.h"

int main()
{
    Stack s;
    cout << "Stack is Empty?" << s.empty() << endl;

    cout << "elements number ?";
    int numItems;
    cin >> numItems;
    for (int i = 1; i <= numItems; i++)
        s.push(i);

    cout << "stack contendts:\n:";
    s.display();

    while (!s.empty())
    {
        cout << "Popping" << s.top() << endl;
        s.pop();
    }
    cout << "trying to pop: " << endl;
    s.pop();
    cout << endl;
}
