#include <iostream>
using namespace std;
class Number {
public:
    int value; // Stores the value of the object
    // Constructor
    Number(int v){
    value=v;
    }
    // Overload - operator
    Number operator-(const Number& other) const {
        return Number(value - other.value); // Subtracts values and returns a new Number object
    }
    // Overload prefix -- operator
    Number& operator--() {
        --value; // Decrement the value
        return *this; // Return the updated object
    }
    // Overload postfix -- operator
    Number operator--(int) {
        Number temp = *this; // Save the current state
        value--;             // Decrement value
        return temp;         // Return the old state
    }
    // Method to display the value
    void display() const {
        cout << "Value: " << value << endl;
    }
};
int main() {
    Number num1(10);
    Number num2(3);
    // Using the - operator
    Number result = num1 - num2;
    result.display(); // Output: Value: 7
    // Using prefix -- operator
    --num1;
    num1.display(); // Output: Value: 9
    // Using postfix -- operator
    num2--;
    num2.display(); // Output: Value: 2
    return 0;
}
