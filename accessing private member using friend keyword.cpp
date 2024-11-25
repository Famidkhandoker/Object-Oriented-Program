//accessing private member using friend keyword:
#include <bits/stdc++.h>

class Derived;
class Base {
private:
    int privateValue;

public:
    Base(int val) : privateValue(val) {}

    friend class Derived;
};
class Derived : public Base {
public:
    Derived(int val) : Base(val) {}

    void show() {

        printf("Private value in Base (accessed from Derived): %d\n",privateValue );
    }
};

int main() {
    Derived d(99);
    d.show();
    return 0;
}
