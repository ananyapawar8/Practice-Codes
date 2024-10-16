#include<stdio.h>
struct Demo{

    int i;
    float f;
    int j;

};

int main(){

    struct Demo obj1;
    struct Demo obj2;

    struct Demo *ptr=NULL;//to avoid runtime accidents always initialise ptr with NULL;also it's a good programming practice to iniialise ptr with NULL.
    ptr=&obj2;
  //struct Demo *ptr=&obj2; 

    obj1.i=11;
    obj1.f=90.99;
    obj1.j=21;
    //obj2.i=11;
    ptr->i=51;
    ptr->f=90.88;
    ptr->j=201;
    printf("%d\n",obj1.i);
    printf("%d\n",ptr->i);
    //printf("%d\n",obj2.i);
    return 0;
}