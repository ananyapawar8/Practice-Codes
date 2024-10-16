#include<iostream>
using namespace std;

class Demo{
    public:
    int i, j;
    static int k;

    Demo(int a=10, int b=20){ //Constructor is only used to initialise instance variable

        i=a;
        j=b;

    }

    void Display(){

        cout<<"Value of"<<i<<"\n";
        cout<<"Value of"<<j<<"\n";

    }

};

int Demo::k=111; //:: - Scope Resolution Operator

int main(){
    cout<<"Value of k is:"<<Demo::k<<"\n";

    Demo obj1(11,22);
    Demo obj2(22,33);
    Demo obj3(33,44);

    cout<<"Size of objest is:"<<sizeof(obj1)<<"\n";

    obj1.Display();
    obj2.Display();
    obj3.Display();

    return 0;
}

//Itha Interviwer ni vicharla ki Object chi size Kiti? 
//Tr tyanna vicharachy ki tya class madhe kiyi static and non-static variables ahet? 
//mg tyanni sangitla suppose teen non-static ani 1 static aahe tr objects chi size 12 bytes hoil.