#include<iostream>
using namespace std;

float Calculate(float Marks, float Outof=100){  //zar koni nahi dila tr 100 nahi tr je parameter dila te
    float Percentage=((Marks/Outof)*100);
    return Percentage;
}

int main(){
    float Ans=0.0f;
    Ans= Calculate(86,90);
    cout<<"Percentage: "<<Ans<<"\n";

    Ans= Calculate(86);
    cout<<"Percentage: "<<Ans<<"\n";
    
    Ans= Calculate(320,400);
    cout<<"Percentage: "<<Ans<<"\n";
    return 0;
}