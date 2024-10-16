//Header file for printf and scanf
#include<stdio.h>

//Entry point function from where execution starts
int main(){

    int Value1=10; //Vaatitle Murmure
    int Value2=11; //Vaatitli Farsan
    int Ans=0; //Rikami Vaati Sukhi Bhel Banvinya Saathi [It's a good Programming practice to intialise a Variable with 0]

    Ans= Value1+Value2;

    printf("Ans=%d",Ans);  //%d is format specifier for integer

    return 0;  //Return 0 to OS which indicates success
}