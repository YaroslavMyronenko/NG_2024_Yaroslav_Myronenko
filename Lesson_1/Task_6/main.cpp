#include <iostream>
#include <cstdlib>
#include<windows.h>  // бібліотека для команди затримки "Sleep()"
using namespace std;

int main()
{
    int height = 0;
    cout << "Entered height triangle: --> " << endl;
    cin >> height;
    for (int circle = 0; circle <= 8; circle++) {
    system("cls"); // Очистка консолі
    for (int a = 1; a <= height; a++) {   // Трикутник
        for (int b = 1; b <= a; b++) {
            cout << "*";
        }
        cout << endl;
    }

    Sleep(200);   // Затримка консолі
    system("cls");
    for (int a = height; a >= 1; a--) {  // -Трикутник
        for (int b = 1; b <= a; b++) {
            cout << "*";
        }
        cout << endl;
    }

    Sleep(200);
    system("cls");
    for (int a = 1; a <= height; a++) {        //Трикутник перевернутий на 90 градусів
        for (int b = 1; b <= height; b++) {
            if (b < height - a + 1)
                cout << " ";
            else cout << "*";
        }
        cout << endl;
    }

    Sleep(200);
    system("cls");
    for (int a = height; a >= 1; a--) {       //Трикутник повернутий на 270
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




