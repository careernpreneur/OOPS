#include <iostream>
using namespace std;

class Rectangle {
    // Attributes or fields
public:
    int length;
    int breadth;

    // Methods or Behavior
    int Area() {
        return length * breadth;
    }

    int Perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    // Creating the Object of the class
    Rectangle r;

    r.length = 10;
    r.breadth = 20;

    cout << "The Area of Rectangle is : " << r.Area() << endl;
    cout << "The Perimeter of Rectangle is : " << r.Perimeter() << endl;

    return 0;
}
