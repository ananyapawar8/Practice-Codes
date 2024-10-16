#include<stdio.h>
int Addition(int No1, int No2){ //Dukaandarache Bhaande No1,No2
    int Sum=0; //Dukaandaraa ch rikaama bhaanda sukhi bhel banavinya karita
    Sum=No1+No2; //Buissness Logic
    return Sum;
}
int main(){
    int Value1=10;
    int Value2=11;
    int Ans=0;  //Rikami bhandi Sukhi Bhel Banvinya Saathi dunkandara kale ghyum janya karita
    Ans= Addition(Value1,Value2);
    printf("Addition is:%d\n",Ans);

    return 0;
}