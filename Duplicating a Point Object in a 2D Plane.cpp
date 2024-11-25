#include <iostream>
using namespace std;
class Point {
private:
    int x;
    int y;
public:

    Point(int xCoord, int yCoord)   {
        x=xCoord;
        y=yCoord;
        cout << "Point created: (" << x << ", " << y << ")" << endl;
    }



    // Method to display the point
    void display(){
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // Creating a point
    Point p1(10, 20);
    p1.display();

    // Using the copy constructor to duplicate the point
    Point p2=p1; // Copy constructor is called
    p2.display();

    return 0;
}

