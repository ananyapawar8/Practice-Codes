#include<iostream>
using namespace std;

class Demo{
    public:
    int i, j;
    Demo(int a=10, int b=20){ //Parameterized Constructor with Default Arguement
        i=a;
        j=b;
    }

    /*Demo(){

    }*/

    void Display(){
        cout<<"Value of"<<i<<"\n";
        cout<<"Value of"<<j<<"\n";
    }

};

int main(){
    Demo obj1;
    obj1.Display();
    
    Demo obj2(100);
    obj2.Display();

    Demo obj3(11,22);
    obj3.Display();

    return 0;
}