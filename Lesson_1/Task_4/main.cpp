#include <iostream>
using namespace std;

int main() {
    int salary = 0;
    cout << "Vasha Zarplata:-->" << endl;
    cin >> salary;
    if (salary < 1000){
        cout << "Rabotay bolshe" << endl;
    }
    if (salary > 1000) {
        if (salary < 1000000) {
            cout << "Tu maladec" << endl;   }
        }
    if (salary > 1000000) {
        cout << "Miloiner!" << endl;
        }

}
