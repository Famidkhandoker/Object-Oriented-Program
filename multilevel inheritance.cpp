//multilevel:
#include <bits/stdc++.h>
class Parent {
public:
    void increment(int i) {
       i++;

        printf("this is main class & i=%d\n",i);
    }
};
class Child : public Parent {
public:
    void childdouble(int i) {
        i*=2;
        printf("this is child class and show double & i=%d\n",i);

    }
};

class GrandChild : public Child {
public:
    void decrement(int i) {
        i--;
        printf("this is grand child class and show decrement & i=%d\n",i);

    }
};
int main() {
    int i=10;
    Parent p;
    p.increment(i);

    Child c;
    c.childdouble(i);
    c.increment(i);

    GrandChild g;
    g.childdouble(i);
    g.increment(i);
    g.decrement(i);

    return 0;
}
