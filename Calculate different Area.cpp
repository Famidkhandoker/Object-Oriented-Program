#include <iostream>
using namespace std;
class Area {
public:
    virtual void calculate() const {
        cout << "This is the base class Area." << endl;
    }
};
class Circle : public Area {
    double radius;
public:
    Circle(double r){
    radius=r;
    }
    void calculate() const override {
        double area = 3.14 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};
class Rectangle : public Area {
    double length, width;
public:
    Rectangle(double l, double w){
    length=l;
    width=w;
    }

    void calculate() const override { // Overriding the calculate method
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};


class Triangle : public Area {
    double base, height;
public:
    Triangle(double b, double h){
    base=b;
    height=h;
    }

    void calculate() const override {
        double area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};

int main() {

    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 7.0);
      // Pointer to base class
    Area* shape;

    // Calculate area of each shape using polymorphism
    shape = &circle;
    shape->calculate();

    shape = &rectangle;
    shape->calculate();

    shape = &triangle;
    shape->calculate();

    return 0;
}
