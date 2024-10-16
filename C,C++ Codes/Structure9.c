//We can create multiple objects of an inner structure.
#include<stdio.h>
struct Hello{
    int no;
    float d;
};
  
struct Demo{
    int i;
    float f;
    struct Hello hobj1;
    struct Hello hobj2;
}dobj;

int main(){
    
    printf("Size of objectis :%d\n",sizeof(dobj));
    
    return 0;
}
