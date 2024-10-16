#include<iostream>
using namespace std;

class Demo{
    public:
        int Addition(int A, int B){  //Addition@2ii  [Name Mangling]
            int Ans=0;
            Ans= A+B;
            return Ans;
            }
        int Addition(int A,int B,int C){  //Addition@3iii ; Hi nava C++ chya creator(B.S) ne jashi language bnavita veles lihli hoti tya format madhe aahe.
            int Ans=0;
            Ans=A+B+C;
            return Ans;
        }
        float Addition(float A, float B){  //Addition@2ff
            float Ans=0.0f;
            Ans= A+B;
            return Ans;
        }
};

int main(){
    Demo obj;

    int i=10, j=20, k=30;
    int Ret=0;
    float p=90.7f, q=78.0f, fRet=0.0f;

    fRet=obj.Addition(p,q);
    cout<<"Addition is:  "<<fRet<<"\n";

    Ret= obj.Addition(i,j);
    cout<<"Addition is: "<<Ret<<"\n";

    Ret= obj.Addition(i,j,k);
    cout<<"Addition is: "<<Ret<<"\n";

    return 0;
}
//Itha compiler compile kartan veles name mangling krto ankhi he compiler to compiler differ hota
