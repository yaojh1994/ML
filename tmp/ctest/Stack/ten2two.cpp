#include <iostream>
using namespace std;
#include <stack>

int main()
{
    unsigned number, remainder;
    stack<int> stackOfRemainders;

    char response;
    do
    {
        cout << "enter number";
        cin >> number;
        while (number !=0)
        {
            remainder = number % 2;
            stackOfRemainders.push(remainder);
            number /= 2;
        }
        cout << "base-two:";
        while( !stackOfRemainders.empty())
        {
            remainder = stackOfRemainders.top();
            stackOfRemainders.pop();
            cout << remainder;
        }
        cout << endl;
        cout << "\nMore (Y or N)>";
        cin >> response;
    }
    while (response == 'Y' || response == 'y');
}

