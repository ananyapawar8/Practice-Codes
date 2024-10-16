#include<stdio.h>
int main(){
    int i=1;
    int n=0;
    printf("Enter no. of times you want do display 'Jai Ganesh': \n");
    scanf("%d",&n);
    while(i<=n){
        printf("Jai Ganesh...\n");
        i++;
    }

    return 0;
}