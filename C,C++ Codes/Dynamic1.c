#include<stdio.h>
#include<stdlib.h>

int main(){

    int Arr[5];     //Static Memory
    float fValue;   //Static Memory
    double Brr[4];  //Static Memory

    int iSize=0;
    int *ptr = NULL;
    
    printf("Enter the size of Array: ");
    scanf("%d",&iSize);

    ptr=(int *)/*type Casting*/malloc(iSize * sizeof(int)); //4ltr Doodh de //Amul Family Pack Ice-cream

    ptr[0]=10;
    ptr[1]=11;
    ptr[0]=12;

    free(ptr);
    
    return 0;
}

// void * malloc(int size);

// void free(void *ptr);