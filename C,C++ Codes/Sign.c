#include<stdio.h>
int main(){
    int i=10;
    signed int j=20;   //Default
    signed int k=-40;  //Default

    unsigned int a=23;
    //unsigned int a=-23;  //NA

    int x=10;       //10/-  4 bytes
    short int y=10;  //8/-  2 bytes
    long int z=20;   //15/- 8 bytes

    printf("%d\n",i);
    printf("%d\n",j);
    printf("%d\n",k);
    printf("%d\n",a);
    printf("%u\n",sizeof(i));
    printf("%u\n",sizeof(j));
    printf("%u\n",sizeof(a));
    printf("%u\n",sizeof(x));
    printf("%u\n",sizeof(y));
    printf("%u\n",sizeof(z));
    
    return 0;
}