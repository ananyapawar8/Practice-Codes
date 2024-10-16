#include<iostream>
using namespace std;

class Base{
    public:
        int i,j,k;
        virtual void Fun(){     //1000
            cout<<"Inside Base Fun"<<"\n";      
        }
        void Sun(){     //2000
            cout<<"Inside Base Sun"<<"\n";      
        }
        virtual void Gun(){     //3000
            cout<<"Inside Base Gun"<<"\n";      
        }
        void Run(){     //4000
            cout<<"Inside Base Run"<<"\n";      
        }

};

class Derived: public Base{
    public:
        int a,b;
        virtual void Gun()
        {     //5000
        cout<<"Inside Derived Gun"<<"\n";       //Redefination
        }
        virtual void Run()
        {     //6000
        cout<<"Inside Derieved Run"<<"\n";      //Redefination
        }
        virtual void Mun()
        {     //7000
        cout<<"Inside Derieved Mun"<<"\n";      
        }

};

int main(){
        
    cout<<sizeof(Base)<<"\n";       //12 bytes
    cout<<sizeof(Derived)<<"\n";    //20 bytes
    
    Base *bp = new Derived;
    bp->Fun();  // Base Fun
    bp->Gun();  // Der Gun
    bp->Sun();  // Base Sun
    bp->Run();  // Base Run
    // bp->Mun();   // Error
    
    return 0;
}