#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
using namespace std;

// Функція для очищення екрану
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Функція для затримки
void pause(int seconds) {
    std::this_thread::sleep_for(std::chrono::milliseconds(seconds));
}

// Функція для малювання трикутника в нормальному положенні
void TriangleNormal(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Функція для малювання перевернутого трикутника
void TriangleUpsideDown(int height) {
    for (int i = height; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Функція для малювання трикутника, повернутого на 90 градусів
void TriangleRight(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height; j++) {
            if (j < height - i + 1) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

// Функція для малювання трикутника, повернутого на 270 градусів
void TriangleLeft(int height) {
    for (int i = height; i >= 1; i--) {
        for (int j = 1; j <= height; j++) {
            if (j < height - i + 1) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

int main() {
    int height;
    cout << "Enter height:" << endl;
    cin >> height;
    while (true) {
        // Малюємо трикутник у нормальному положенні
        clearScreen();
        TriangleNormal(height);
        pause(220);

        // Малюємо трикутник, повернутий на 90 градусів
        clearScreen();
        TriangleRight(height);
        pause(220);

        // Малюємо перевернутий трикутник
        clearScreen();
        TriangleUpsideDown(height);
        pause(220);

        // Малюємо трикутник, повернутий на 270 градусів
        clearScreen();
        TriangleLeft(height);
        pause(220);
    }

    return 0;
}



