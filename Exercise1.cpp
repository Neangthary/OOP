#include <iostream>
using namespace std;

/* Write a class having two public variables
and one member function which will return the area of the rectangle. */

class Rectangle {
    public:
        int length, breadth;
        int area() { // Member function
            return length *breadth;
        } 
};

int main() {
    Rectangle r; // Declare an object of class Rectangle
    cout << "Enter length of rectangle: ";
    cin >> r.length; 
    cout << "Enter breadth of rectangle: ";
    cin >> r.breadth;
    cout << "The area of the rectangle is: " << r.area() << endl;
    return 0;
}
