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
        int trunk_width = stars / 4;
        int trunk_height = stars / 5;
            for (int trunk = 0; trunk < trunk_height; trunk++) {
            for (int space = 0; space < stars - trunk_width - 1; space++)
                cout << " ";
            for (int width = 0; width < trunk_width * 2 + 1; width++)
                cout << "|";
            cout << endl;
        }
        return 0;

}
