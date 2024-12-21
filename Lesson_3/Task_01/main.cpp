#include <iostream>

using namespace std;

void drawSpace(int space) {
    if (space > 0) {
        drawSpace(space - 1);
        cout << " ";
    }
}

void drawRows(int stars) {
    if (stars > 0) {
        drawRows(stars - 1);
        cout << "*";
    }
}

void drawTree(int rows, int count) {
    if (count < rows) {
        drawSpace(rows - count - 1);
        drawRows(2 * count + 1);
        cout << endl;
        drawTree(rows, count + 1);
    }
}

void drawStump(int space, int ofset) {
    if (space < ofset) {
        drawSpace(space < ofset);
        drawStump(space + 1, ofset);
    }
}

int main(){
    drawTree(4, 0);
    drawStump(0, 3);
    cout << "*" << endl;
    return 0;
}
