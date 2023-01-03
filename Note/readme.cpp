// ! Type conversion
// ? Conversion from basic to class type 
// ? Conversion from class type to basic
// ? Conversion from one class type to another class type
// ! conversion from basic to class type
#include<iostream>
#include<conio.h>
using namespace std;
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