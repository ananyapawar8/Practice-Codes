#include<stdio.h>
#include<stdlib.h>

int main(){

    int iSize=0;
    int *ptr = NULL;
    
    printf("Enter the size of Array: ");
    scanf("%d",&iSize);

    ptr=(int *)/*type Casting*/calloc(iSize , sizeof(int)); //Doodh chi 8 pischvi de 1/2ltr chya //Amul Family Pack Ice-cream

    ptr[0]=10;
    ptr[1]=11;
    ptr[0]=12;

    free(ptr);
    return 0;
}


// void * malloc(int size);
// void * calloc(int No_of_Elements, int size_of_each_element);
// void * realloc(void * ptr, int new_size);
// void free(void *ptr);