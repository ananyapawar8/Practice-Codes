#include<iostream>
using namespace std;

class Hello
{
    public:
    void Display();//Prototype class chya aat madhe declare kela.
};

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Demo(){

            i=10;
            j=20;
            k=30;
        }
    friend void Hello :: Display();   // "::" = Scope Resolution
};
void Hello :: Display() //Function class chya baaher define kela.
{
Demo obj;
cout<<"Value of i:"<<obj.i<<"\n";
cout<<"Value of j:"<<obj.j<<"\n";
cout<<"Value of k:"<<obj.k<<"\n";
}


int main(){
    
    Hello hobj;
    
    hobj.Display();
    
    return 0;
}

//Here the sequence is changed from the previous(friend2.cpp) code in order to solve the compilers error one by one you may try it yourself by rearranging the code.