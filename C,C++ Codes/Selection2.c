#include<stdio.h>
int main(){
    int Standard=0;

    printf("Primary School Portal\n");
    printf("Enter your Division:\n");
    scanf("%d",&Standard);
    //if else if ladder 
    //Dusrya cha ghar cha switch board/button
if(Standard==1){
    printf("Your Exam is at 1pm");
}else if(Standard==2){
    printf("Your exam is at 2pm");
}else if(Standard==3){
    printf("Your exam is at 3pm");
}else if(Standard==4){
    printf("Your exam is at 4pm");
}else if(Standard==5){
    printf("Your exam is at 5pm");
}else{
    printf("Invalid Standard");
}
    return 0;
}
