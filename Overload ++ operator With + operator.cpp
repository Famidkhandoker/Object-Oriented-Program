#include <iostream>
using namespace std;
class Number {
public:
    int value;
   Number(int v){
   value=v;
   }
    // Overloading + operator
    Number operator+(const Number& other) const {
        return Number(value + other.value); // Return a new Number object
    }
    // Overloading prefix ++ operator
    Number& operator++() {
        ++value; // Increment the value
        return *this; // Return the updated object
    }
    // Overloading postfix ++ operator
    Number operator++(int) {
        Number temp = *this; // Save the current state
        value++;             // Increment the value
        return temp;         // Return the old state
    }
    // Display method
    void display() const {
        cout << "Value: " << value << endl;
    }
};
int main() {
    Number num1(5);
    Number num2(3);

    // Using the + operator
    Number result = num1 + num2;
    result.display(); // Output: Value: 8
    // Using prefix ++ operator
    ++num1;
    num1.display(); // Output: Value: 6
    // Using postfix ++ operator
    num2++;
    num2.display(); // Output: Value: 4
    return 0;
}
