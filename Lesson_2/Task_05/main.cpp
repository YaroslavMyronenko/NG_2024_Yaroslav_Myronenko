#include <iostream>

using namespace std;

int main()
{
    char Line[256];
    cout << "Enter Line: --> ";
    cin.getline(Line, 256);
    bool new_words = false;
    unsigned short int word_count = 0;

    for (int counter = 0; Line[counter]; counter++){
        if ((Line[counter] >= 'A' && Line[counter] <= 'Z') || (Line[counter] >= 'a' && Line[counter] <= 'z')){
            if (!new_words){
                new_words = true;
                word_count++;
            }
        }else new_words = false;
    }
    cout << "Numbers of words " << word_count << " in Line" << endl;
    return 0;
}
