#include <iostream>
using namespace std;
double calcArea(double s) {
    return s * s;
}
double calcPerimeter(double s) {
    return 4 * s;
}
int main() {
    double side;
    cout << "Enter side length: ";
    cin >> side;
    cout << "Area: " << calcArea(side) << endl;
    cout << "Perimeter: " << calcPerimeter(side) << endl;
    return 0;
}
