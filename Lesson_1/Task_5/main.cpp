#include <iostream>

using namespace std;

int main()
{
    int stars = 0;
    cout << "Enter amount height:--> ";
    cin >> stars;
    for ( int height = 0; height < stars; height++ ) {
        for (int space = 0; space < stars - height - 1; space++ )
            cout << " ";
        for ( int width = 0; width < 2 * height + 1; width++ )
            cout << "*";
        cout << endl;
    }
    int ofset = stars - 1;
    for (int spase = 0; spase < ofset; spase++ ){
        cout << " ";
    }
    cout << "*" << endl;
    return 0;
}
