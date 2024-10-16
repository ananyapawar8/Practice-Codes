#include<stdio.h>
int main(){
char ch='A';
int i=21;
float f=12.31f;
double d=89.9034;
printf("The size of interger is:%d bytes\n",sizeof(i));
printf("The size of character is:%d bytes\n",sizeof(ch));
printf("The size of float is:%d bytes\n",sizeof(f));
printf("The size of double is:%d bytes\n",sizeof(d));

printf("Base Address of character is: %d\n",&ch);
printf("Base Address of integer is: %d\n",&i);
printf("Base Address of float is: %d\n",&f);
printf("Base Address of double is: %d\n",&d);
    return 0;
}