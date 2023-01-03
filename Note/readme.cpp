// ! Type conversion
// ? Conversion from basic to class type 
// ? Conversion from class type to basic
// ? Conversion from one class type to another class type

#include<iostream>
#include<conio.h>
using namespace std;
/*
// ! conversion from basic to class type
class complex{
    private:
    int feet;
    int inch;
    public:
    complex(float x){
        feet=int(x);
        inch=12*(x-feet);
    }
    void display(){
        cout<<"feet ="<<feet<<endl<<"inch ="<<inch;
    }

};
int main(){
     float f=7.2;
    complex c1=f;
    c1.display();
   

getch();
    return 0;
}
//thankyou
*/
// ! Conversion of class type to basic type
class complex{
    private:
    int feet;
    int inch;
    public:
    complex(int x,int y){
        feet=x;
        inch=y;
    }
    operator float(){
        float a=feet+inch/12.0;
        return a;
    }
};
int main(){
    complex c1(7,2);
    float x=(float)c1;
    cout<<"x ="<<x;
    getch();
    return 0;
}