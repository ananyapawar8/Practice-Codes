#include<stdio.h>
int main(){
    int i=1;
    int n=0;
    printf("Enter no. of times you want do display 'Jai Ganesh': \n");
    scanf("%d",&n);
    do{
        printf("Jai Ganesh...\n");
        i++;
    }while(i<=n);

    return 0;
}