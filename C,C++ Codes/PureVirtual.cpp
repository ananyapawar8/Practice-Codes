#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

        void Fun()          //Concrete Method
        {     
            cout<<"Base Fun\n";
        }
        virtual void gun(){ //Concrete Method
            cout<<"Base Gun\n";
        }
        virtual int Addition(int no1, int no2)=0; //Abstract method //Vadilanna ghar ghya ch hota pn gheta nahi aala tr ti jawab daari derieved class 
    
};

class Derieved : public Base 
{
    public:
        int a,b;
        void gun()  //Concrete Method
        {
            cout<<"Derived Gun\n";
        }
        virtual void sun()      //Concrete Method
        {
            cout<<"Derived Sun\n";
        }
        int Addition(int no1, int no2)  //Concrete Method
        {
            return no1+no2;
        }

};

int main(){
    // Base obj; //NA as abstract method is present i.e virtual int Addition(int no1, int no2)=0;
    Base *bp = new Derieved;
    bp->Fun();
    bp->gun();
    int Ret=0;
    Ret = bp->Addition(10,11);
    cout<<"Addition is: "<<Ret<<"\n";
    
    return 0;
}