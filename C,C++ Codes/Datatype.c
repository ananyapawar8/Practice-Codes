#include<stdio.h>
int D=34; //Global Variable
int main(){

    char cValue='a';
    int iValue=2;
    float fvalue=256.34f;
    double dValue=2.4554645645646;

    printf("%c\n",cValue);
    printf("%d\n",iValue);
    printf("%f\n",fvalue);
    printf("%f\n",dValue);
    printf("%d",D);
    return 0;
}