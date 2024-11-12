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
        for (int sideA = 1; sideA <= height; sideA++) {   // Triаngle
            for (int sideB = 1; sideB <= sideA; sideB++) {
                cout << "*";
            }
            cout << endl;
        }

        Sleep(200);   // console delay
        system("cls");
        for (int sideA = height; sideA >= 1; sideA--) {  // -Triangle
            for (int sideB = 1; sideB <= sideA; sideB++) {
                cout << "*";
            }
            cout << endl;
        }

        Sleep(200);
        system("cls");
        for (int sideA = 1; sideA <= height; sideA++) {        //Triangle rotation on П/2
            for (int sideB = 1; sideB <= height; sideB++) {
                if (sideB < height - sideA + 1)
                    cout << " ";
                else cout << "*";
            }
            cout << endl;
        }

        Sleep(200);
        system("cls");
        for (int sideA = height; sideA >= 1; sideA--) {       //Triangle rotation on 3П/2
            for (int sideB = 1; sideB <= height; sideB++) {
                if (sideB < height - sideA + 1)
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




