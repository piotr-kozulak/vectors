#include <iostream>
#include "vector.h"
using namespace std; // Add this line

int main() {
    double x1, y1, x2, y2;

    cout << "Enter the coordinates for vector 1 (x y): ";
    cin >> x1 >> y1;
    Vector v1(x1, y1);

    cout << "Enter the coordinates for vector 2 (x y): ";
    cin >> x2 >> y2;
    Vector v2(x2, y2);

    Vector sum = v1 + v2;
    Vector diff = v1 - v2;

    double scalar;
    cout << "Enter the scalar value for multiplication: ";
    cin >> scalar;
    Vector scaled1 = v1 * scalar;
    Vector scaled2 = v2 * scalar;

    cout << "Vector 1: (" << v1.getX() << ", " << v1.getY() << "), Length: " << v1.length() << endl;
    cout << "Vector 2: (" << v2.getX() << ", " << v2.getY() << "), Length: " << v2.length() << endl;
    cout << "Sum: (" << sum.getX() << ", " << sum.getY() << "), Length: " << sum.length() << endl;
    cout << "Difference: (" << diff.getX() << ", " << diff.getY() << "), Length: " << diff.length() << endl;
    cout << "Scaled Vector 1: (" << scaled1.getX() << ", " << scaled1.getY() << ")"  << endl;
    cout << "Scaled Vector 2: (" << scaled2.getX() << ", " << scaled2.getY() << ")" << endl;

    return 0;
}