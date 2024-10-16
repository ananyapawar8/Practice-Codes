#include<iostream>
using namespace std;

class Demo{
    public:
    int i, j;
    static int k;

    Demo(int a=10, int b=20){ // Parametrised Constructor with default arguement
    
        i=a;
        j=b;

    }

    void Display(){ //Thali ke andar ki sabjiyaa/content

        cout<<"Inside non static method Display"<<"\n";
        cout<<"Value of i: "<<i<<"\n";
        cout<<"Value of j: "<<j<<"\n";
        cout<<"Value of k: "<<k<<"\n";

    }
    static void Fun(){ //Achaar; 
        cout<<"Inside static method Fun"<<"\n";
        cout<<"Value of k: "<<k<<"\n";
    }

};

int Demo::k=111;

int main(){
    Demo::Fun();
    cout<<"Value of k is:"<<Demo::k<<"\n";
    Demo obj1(11,22);
    Demo obj2(22,33);
    Demo obj3(33,44);

    cout<<"Size of object is:"<<sizeof(obj1)<<"\n";

    obj1.Display();
    obj2.Display();
    obj3.Display();

    obj1.Fun();  //Demo::Fun();    <-- This is what happens inside compiler.

    return 0;
}