#include <bits/stdc++.h>
class Person{
    public:
    void display(){
        printf("\nI am a person");
    }
};
class Teacher : public Person{
    public:
    void display(){
        printf("\nI am a teacher");
    }
};
class Student : public Person{
    public:
    void display(){
        printf("\nI am a student");
    }
};
int main() {

   Person p;
   p.display();//I am a person
   Student s;
   s.display();//I am a student
   Teacher t;
   t.display();//I am a teacher
    return 0;
}



