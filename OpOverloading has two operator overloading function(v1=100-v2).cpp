#include <iostream> // Include required header for input/output
using namespace std;

class Opoverloading {
public:
    int value;

    // Constructor with default value
    Opoverloading(int v = 0) : value(v) {}

    // Friend function to overload the operator for (int - Opoverloading)
    friend Opoverloading operator-(int lhs, const Opoverloading& rhs) {
        return Opoverloading(lhs - rhs.value);
    }

    // Overloading the operator for (Opoverloading - Opoverloading)
    Opoverloading operator-(const Opoverloading& rhs) {
        return Opoverloading(value - rhs.value);
    }

    // Display function to output the value
    void display() const {
        cout << "v1 = " << value << endl;
    }
};

int main() {
    Opoverloading v2(30);
    Opoverloading v1; // Create an object v1 using the default constructor (value = 0)

    v1 = 100 - v2; // This will call the friend operator-(int, Opoverloading)
    v1.display();  // Output the value of v1

    return 0;
}
