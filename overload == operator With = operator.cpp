#include<bits/stdc++.h>
class Speed{
public:
    double speed;
    Speed(double s){
    speed=s;
    }
    bool operator==(const Speed& other)const{
        return speed==other.speed;
    }
    void display()const{
    printf("Speed:%.2lf\n",speed);
    }
};
int main(){
Speed speed1(15.5);
Speed speed2(15.5);
Speed speed3(20.0);

speed1.display();
speed2.display();
speed3.display();


if(speed1==speed2){
    printf("speed1 is equal to speed2.\n");
}
else{
    printf("speed1 is not equal to speed2.\n");
}

if(speed1==speed3){
     printf("speed1 is equal to speed3.\n");
}
else{
    printf("speed1 is not equal to speed3.\n");
}
return 0;
}
