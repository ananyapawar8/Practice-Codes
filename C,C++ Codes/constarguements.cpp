#include<iostream>
using namespace std;

void Display(int i, const int j){
    int a=10;
    const int b=20;
    i++;
    // j++;  //NA because "const int j"
    a++;
    // b++;  //NA because "const int b=20;"
}

int main(){

    Display(11,21);
    
    return 0;
}