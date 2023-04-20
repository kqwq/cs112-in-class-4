
#include <iostream>

#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle r1(2.2, 3.3);
    cout << "r1 " << r1;

    Rectangle r2{4, 5};
    cout << "r2 " << r2;

    try {
        Rectangle r3{-5, -7};
        cout << "r3 " << r3;
    } catch (NegativeNumberException e) {
        cout << e.what() << endl;
    }

    return 0;
}
