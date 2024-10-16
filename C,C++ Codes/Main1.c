#include<stdio.h>

int i;
int j=11;

extern int no; //this storage class 
//no is a variale which is an intetger that is available outside Main.c file
int main(){

printf("Value of i:%d\n",i); //0
printf("Value of j:%d\n",j); //11
printf("Value of no:%d\n",no); //


    return 1;
}

// gcc Main.c Helper.c o Myexe
// Myexe

// gcc Helper.c Main.c o Myexe