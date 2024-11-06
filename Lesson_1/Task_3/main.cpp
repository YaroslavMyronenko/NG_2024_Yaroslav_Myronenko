#include <iostream>

using namespace std;

int main()
{
    cout << "Calculate" << endl;
    int num1, num2;
    char action;
    cout << "enter first num: ";
    cin >> num1;
    cout << "enter action (+-*/): ";
    cin >> action;
    cout <<"enter second num: ";
    cin >> num2;

    switch (action) {
    case '+':
    {
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
        break;
    }
    case '-':
    {
        cout << num1 << " - "<< num2 << " = " << num1-num2 << endl;
        break;
    }
    case '*':
    {
        cout << num1 << " * "<< num2 << " = " << num1*num2 << endl;
        break;
    }
    case '/':
    {
        if (num2 == 0)
        {
            cout << "You cannot divide by zero";
            break;
        }
        cout << num1 << " / " << num2 <<" = "<< num1 / num2 << endl;
        break;
    }
    case '%':
    {
        if (num2 == 0)
        {
            cout << "You cannot divide by zero";
            break;
        }
        cout << num1 << " % " << num2 <<" = "<< num1 % num2 << endl;
        break;
    }
    default:
    {
        cout << "No such operator exists :( " << endl;
    }
    }
}
