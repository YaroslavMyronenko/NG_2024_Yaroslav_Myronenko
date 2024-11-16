#include <iostream>
using namespace std;

int main() {
    int salary = 0;
    cout << "Vasha Zarplata:-->" << endl;
    cin >> salary;
    if (salary < 1000000){
        if (salary > 1000){
            cout << "Tu molodec";}
    }
    if (salary < 1000){
        cout << "Rabotay bolshe";}
    if (salary > 1000000){
        cout << "Tu Milioner";
    }
}
