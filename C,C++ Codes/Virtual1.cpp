#include<iostream>
using namespace std;

class Base{
    public:
        int i,j,k;
        void Fun(){
            cout<<"Inside Fun"<<"\n";
        }

};

class Derived: public Base{
    public:
        int a,b;
        void Gun(){
            cout<<"Inside Derived Gun"<<"\n";
        }

};

int main(){
    Base bobj;
    Derived dobj;

    cout<<sizeof(bobj)<<"\n";
    cout<<sizeof(dobj)<<"\n";

    bobj.Fun();

    dobj.Fun();
    dobj.Gun();
    
    return 0;
}