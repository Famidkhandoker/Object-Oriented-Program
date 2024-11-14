#include <bits/stdc++.h>
class Person{
    public:
  virtual  void display(int i){
        printf("\nI am a person%d",i);
    }
};
class Teacher : public Person{
    public:
    void display(int i){
        i++;
        printf("\nI am a teacher %d",i);
    }
};
class Student : public Person{
    public:
    void display(int i){
        i--;
        printf("\nI am a student%d",i);
    }
};
int main() {
   int i= 7;
   Person *p;
   Student s;
   Teacher t;
   p=&s;
   p-> display(i);//I am a student6

   p=&t;
   p->display(i);//I am a student6

    return 0;
    }
