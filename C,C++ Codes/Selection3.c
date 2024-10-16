#include<stdio.h>
int main(){
    int Standard=0;

    printf("Primary School Portal\n");
    printf("Enter your Division:\n");
    scanf("%d",&Standard);
    
    //Switch Case:Faster than else-if ladder
   //Swataha chya ghar chi switch button
    switch(Standard){
        case 1:
        printf("Your exam is at 1pm\n");
        break;
        case 2:
        printf("Your exam is at 2pm\n");
        break;
        case 3:
        printf("Your exam is at 3pm\n");
        break;
        case 4:
        printf("Your exam is at 4pm\n");
        break;
        default:
        printf("Invalid Standard");
        break;
    } 

return 0;
}
