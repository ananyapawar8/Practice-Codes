#include<iostream>
using namespace std;

class Demo{
    public:
    int i;
    int j;
    int k;

    //Demo(Demo *this, int a =10,int b=20, int c=30)
    Demo (int a=10, int b=20, int c=30){
        cout<<"Value of this is: "<<this<<"\n";
        i=a;
        j=b;
        k=c;

    }
    //void Fun(Demo *this int No1, int No2 )
    void Fun(int No1, int No2){
        cout<<"Inside Fun\n";
        cout<<"Value of i:"<<this->i<<"\n";
        cout<<"Value of j:"<<this->j<<"\n";
        cout<<"Value of k:"<<this->k<<"\n";

    }
    void Display(){
        cout<<"Inside Display\n";
        cout<<"Value of this keyword: "<<this<<"\n";
    }
};

int main(){
    Demo obj1;
    Demo obj2(11,21,51);

    obj1.Fun(5,6);// Fun(&obj1,5,6);
                  // Fun(100,5,6)

    obj2.Fun(8,9);// Fun(&obj2,8,9);
                  // Fun()
    cout<<"Address of obj1 is: "<<&obj1<<"\n";
    obj1.Display();

    cout<<"Address of obj2 is: "<<&obj1<<"\n";
    obj2.Display();

    return 0;
}