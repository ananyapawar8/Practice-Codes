
#include<stdio.h>
//This is Not Nested Structure.
struct Hello{
    int no;
    float d;
};
// This is Nested Structure as object of Hello is created inside Demo. 
struct Demo{
    int i;
    float f;
    struct Hello hobj;
}dobj;

int main(){
    struct Hello obj; //This is allowed here as struct Hello is outside struct Demo
    dobj.i=11;
    dobj.f=90.99;

    dobj.hobj.no=21;
    dobj.hobj.d=90.88;

    printf("Size of objectis :%d\n",sizeof(dobj));
    printf("%d\n",dobj.i);
    printf("%f\n",dobj.f);
    printf("%d\n",dobj.hobj.no);
    printf("%f\n",dobj.hobj.d);
    return 0;
}