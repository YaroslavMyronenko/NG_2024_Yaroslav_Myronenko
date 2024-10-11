#include <iostream>
using namespace std;

void check_salary(int salary) {
    if (salary < 1000) {
        cout << "Rabotay bolshe" << endl;
        return;
    }
    if (salary < 1000000) {
        cout << "Tu Molodec" << endl;
        return;
    }
    cout << "We Milioner" << endl;
}

int main() {
    int salary;
    cout << "Vasha Zarplata:-->" << endl;
    cin >> salary;
    check_salary(salary);
    return 0;
}

