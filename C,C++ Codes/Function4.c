#include<stdio.h>
int Addition(int No1, int No2){ //Dukaandarache Bhaande No1,No2
    int Sum=0; //Dukaandaraa ch rikaama bhaanda sukhi bhel banavinya karita
    Sum=No1+No2; //Buissness Logic
    return Sum;
}
int Substraction(int Data1, int Data2){ 
    int Sub=0; 
    Sub=Data1-Data2; 
    return Sub;
}
int Multiplication(int Digit1, int Digit2){ 
    int Mul=0; 
    Mul=Digit1*Digit2; 
    return Mul;
}
int main(){
    int Value1=10;
    int Value2=11;
    int Ans=0;  //Rikami bhandi Sukhi Bhel Banvinya Saathi dunkandara kale ghyum janya karita
    Ans= Addition(Value1,Value2);
    printf("ADDITION IS:%d\n",Ans);
     Ans= Substraction(Value1,Value2);
    printf("Substraction is:%d\n",Ans);
    Ans= Multiplication(Value1,Value2);
    printf("Multiplication is:%d\n",Ans);


    return 0;
}