#include <iostream>

using namespace std;

int main()
{
    short unsigned int stars[20];
    short unsigned int counter = 0;
    for (int value = 0; value < 20; value++){
        cout << "Enter "<< value <<" value: ";
        cin >> stars[value];
        if (stars[value] == 0)
            break;
        counter++;

    }
    for (int rows = 0; rows < counter; rows++){
        for (int colns = 0; colns < counter; colns++){
            if (stars[rows] > colns) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
