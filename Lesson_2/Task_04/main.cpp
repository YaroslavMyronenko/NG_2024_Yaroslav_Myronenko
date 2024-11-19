#include <iostream>

using namespace std;

int main()
{
    unsigned short int char_count[256] = {0};
    char Line[256];
    cout << "Enter Line: --> ";
    cin.getline(Line, 256);
    unsigned short int length = strlen(Line);
    for (int counter = 0; counter < length; counter++){
        char_count[(unsigned char)Line[counter]]++;}

    for (int counter = 0; counter < 256; counter++){
        if (char_count[counter] > 0)
            cout << "'" << (char) counter << "' : " << char_count[counter] << endl;}
}
