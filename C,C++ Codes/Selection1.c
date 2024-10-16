#include<stdio.h>
int main(){
    int No=0;
    int Ans=0;
    printf("Enter Number:\n");
    scanf("%d",&No);
    Ans=No%2;

    if(Ans==0){  //Jar answer 0 asel tar...
        printf("The no. is Even");
    }
    else{ //Nahi tar...
        printf("The no. is Odd");
    }

    return 0;
}