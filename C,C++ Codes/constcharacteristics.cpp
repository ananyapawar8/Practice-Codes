#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j; 
        const int k;
        //Parameterised Constructor
        Demo(int a, int b, int c) : j(b), k(c)  //Initialisastion of constant variable
        {
            i=a;
            //j=b;
            //k=c;
        }
};

int main(){

    Demo obj(11,21,51);

    cout<<"Value of i:"<<obj.i<<"\n";
    cout<<"Value of j:"<<obj.j<<"\n";
    cout<<"Value of k:"<<obj.k<<"\n";

    obj.i++;
    cout<<"Value of i:"<<obj.i<<"\n";

    //obj.j++; //NA as "const int j;"
    //obj.k++; //NA as "const int k;"

    return 0;
}