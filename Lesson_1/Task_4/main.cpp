#include <iostream>
using namespace std;

int main() {
    int salary = 0;
    cout << "Vasha Zarplata:-->" << endl;
    cin >> salary;
    if (salary < 1000) {
        cout << "Rabotay bolshe" << endl;
        return 0;
    }
    if (salary < 1000000) {
        cout << "Tu Molodec" << endl;
        return 0;
    }
    cout << "We Milioner" << endl;
    return 0;
}
