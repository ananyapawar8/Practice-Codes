#include<stdio.h>
int main(){
    //1
    int Arr[5]={11,12,13,14,15,16};
    //2
    int Brr[]={11,12,13,14,15,16};

    //3
    int Crr[7]={10,20,30};

    //4
    int Crr[5];
    Crr[0]=10;
    Crr[1]=20;
    Crr[2]=30;

    int Arr[4] = {10,20,30,40};

    const int Brr[4] = {10,20,30,40};


    Arr[1] = 21;        // A
    Brr[1] = 21;        // NA

    Arr[2]++;           // A
    Brr[2]++;           // NA
    
   
    return 0;
}
