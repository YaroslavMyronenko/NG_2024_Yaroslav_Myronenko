#include <iostream>

using namespace std;

int main()
{
    cout << "Calculate" << endl;
    int a, b;
    char c;
    cout << "enter first num: ";
    cin >> a;
    cout << "enter action (+-*/): ";
    cin >> c;
    cout <<"enter second num: ";
    cin >> b;

    switch (c) {
    case '+':
    {
        cout << a << " + " << b << " = " << a+b << endl;
        break;
    }
    case '-':
    {
        cout << a << " - "<< b << " = " << a-b << endl;
        break;
    }
    case '*':
    {
        cout << a << " * "<< b << " = " << a*b << endl;
        break;
    }
    case '/':
    {
        if (b == 0)
        {
            cout << "You cannot divide by zero";
            break;
        }
        cout << a << " / " << b <<" = "<< a / b << endl;
        break;
    }
    case '%':
    {
        if (b == 0)
        {
            cout << "You cannot divide by zero";
            break;
        }
        cout << a << " % " << b <<" = "<< a % b << endl;
        break;
    }
    default:
    {
        cout << "No such operator exists :( " << endl;
    }
    }
}
