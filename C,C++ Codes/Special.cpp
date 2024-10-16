#include<iostream>
using namespace std;

class Demo{  //Class defination 
    public:  //Access Specifier
        int i,j; //Characteristics

        Demo(){ //Default Constructor
            cout<<"Inside Default Constructor\n";
            i=0;
            j=0;

        }
        Demo(int A,int B){ //Parameterised Constructor
            cout<<"Inside Parameterised Constructor\n";
            i=A;
            j=B;

        }
        Demo(Demo &ref){ //Copy Constructor
            cout<<"Inside Copy Constructor\n";
            i=ref.i;
            j=ref.j;

        }
        ~Demo(){
            cout<<"Inside Destructor\n";
        }
};
int main(){
    Demo obj1;       //Ganapati read made wala ghetla;Blouse ready amde waale ghari aanla
    Demo obj2(11,21);  //Ganapati chya pitambaracha colour aani safa ha colour pahile sangitla aani nanatar ganapati banun ghetla; Blouse sampurna maap deun banawla
    Demo obj3(obj2);   //Ganpati ch photo dakhwun Ganapati tayar karun ghetla aahe;Blouse fitting cha deun dusra blouse banwun ghetla aahe

    return 0;
}