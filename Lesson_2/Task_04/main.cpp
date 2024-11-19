#include <iostream>

using namespace std;

int main()
{
    int char_count[256] = {0};
    string Line;
    cout << "Enter Line: --> ";
    getline (cin, Line);
    for (int counter = 0; counter < Line.size(); counter++){
        char_count[(unsigned char)Line[counter]]++;}

    for (int counter = 0; counter < 256; counter++){
        if (char_count[counter] > 0)
            cout << "'" << (char) counter << "' : " << char_count[counter] << endl;}
}
