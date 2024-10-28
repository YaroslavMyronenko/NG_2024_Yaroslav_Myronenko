#include <iostream>

using namespace std;

int main()
{
    int numbers[5];
    for (int counter = 0; counter < 5; counter++){
        cout << "Enter Value: ";
        cin >> numbers[counter];
    }
    for (int counter = 0; counter < 4; counter++) {
        cout << numbers[counter] << ", ";
    }
    cout << numbers[4];
    return 0;
}
