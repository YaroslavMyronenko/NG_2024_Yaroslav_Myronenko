#include <iostream>

using namespace std;

int main()
{
    int stars[5];
    for (int value = 1; value <= 5; value++){
        cout << "Enter "<< value <<" value: ";
        cin >> stars[value];
    }
    for (int rows = 5; rows > 0; rows--) {
        for (int colns = 0; colns <= 5; colns++){
            if (stars[colns] >= rows) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
