#include<stdio.h>

struct Demo{ //Hotel madli thaali cha Menu; Flat cha Floor Plan; Modak cha saacha
    
    int no;
    float f;
    int Arr[3];
   
};
int main(){
    struct Demo obj; 
   

    obj.no=10;

    obj.Arr[0]=20;
    obj.Arr[1]=30;
    obj.Arr[2]=40;

    obj.f=90.90;
   
    printf("size of:%d\n",sizeof(obj));
    

}