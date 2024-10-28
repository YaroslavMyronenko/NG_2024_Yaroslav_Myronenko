#include <iostream>
#include <cstdlib>
#include<windows.h>  // library for "Sleep()" delay command
using namespace std;

int main()
{
    int height = 0;
    cout << "Entered height triangle: --> " << endl;
    cin >> height;
    for (int circle = 0; circle <= 8; circle++) {
    system("cls"); // Clear console
    for (int a = 1; a <= height; a++) {   // Triаngle
        for (int b = 1; b <= a; b++) {
            cout << "*";
        }
        cout << endl;
    }

    Sleep(200);   // console delay
    system("cls");
    for (int a = height; a >= 1; a--) {  // -Triangle
        for (int b = 1; b <= a; b++) {
            cout << "*";
        }
        cout << endl;
    }

    Sleep(200);
    system("cls");
    for (int a = 1; a <= height; a++) {        //Triangle rotation on П/2
        for (int b = 1; b <= height; b++) {
            if (b < height - a + 1)
                cout << " ";
            else cout << "*";
        }
        cout << endl;
    }

    Sleep(200);
    system("cls");
    for (int a = height; a >= 1; a--) {       //Triangle rotation on 3П/2
        for (int b = 1; b <= height; b++) {
            if (b < height - a + 1)
                cout << " ";
            else cout << "*";
        }
        cout << endl;
    }

    Sleep(200);
    system("cls");
    }
    return 0;
}




