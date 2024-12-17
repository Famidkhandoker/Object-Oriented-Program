#include <iostream>
using namespace std;
class A {
public:
    void show() {
        cout << "This is class A." << endl;
    }
};
class B : virtual public A {
public:
    void showB() {
        cout << "This is class B." << endl;
    }
};
class C : virtual public A {
public:
    void showC() {
        cout << "This is class C." << endl;
    }
};
class D : public B, public C {
public:
    void showD() {
        cout << "This is class D." << endl;
    }
};
int main() {
    D obj;
    obj.show();
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}


/*Another type code*/
#include <iostream>
using namespace std;
class A {
public:
   virtual void display() {
        cout << "This is class A." << endl;
    }
};
class B : public A {
public:
    void display() {
        cout << "This is class B." << endl;
    }
};
class C:public A {
public:
    void display() {
        cout << "This is class C." << endl;
    }
};
class D : public B, public C {
public:
    void display() {
        cout << "This is class D." << endl;
    }
};
int main() {
    A obj;
    obj.display();
    B obj2;
    obj2.display();
    C obj3;
    obj3.display();
    D obj4;
    obj4.display();
    return 0;
}
