#include<stdio.h>
int main(){
    int Arr[4]={11,12,13,15};
    printf("Base Address of thre Array: %d\n",Arr); //100
    printf("Base Address of the first element Array: %d\n",&(Arr[0])); //100
    printf("Address of second element is: %d\n",&(Arr[1]));
    printf("Address of fourth element is: %d\n",&(Arr[3]));
    printf("First Element of Array: %d\n",Arr[0]); //11
    printf("Size of the whole array: %d\n",sizeof(Arr)); //16
    printf("Size of second element of array: %d\n",sizeof(Arr[1])); //4

    return 0;
}