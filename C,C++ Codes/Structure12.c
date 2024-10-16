//this program demonstrates Padding
#include<stdio.h>
//#pragma pack(1)//these is used to optimize size of code
union Demo
{
    int i;
    char ch;
    float f;//sequence of declaration matters
    double d; //as double is the largest datatype present therefor that 8 bytes is carried upon

};

int main(){
union Demo  obj;
printf("Size of the object is: %d\n",sizeof(obj));//instead of %d we can use %lu if gettting warning while run time.

obj.f=90.99;
printf("%f\n",obj.f);

obj.i=11;
printf("%d",obj.i);
return 0;// Here size is 24 and it is a standard result but it may vary on the use of different IDE (enviornment) also this proves that the sequence of declaration matters.

}