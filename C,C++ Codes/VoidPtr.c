#include<stdio.h>
int main(){

    char ch='A';
    int i=11;
    float f=90.99f;
    double d=90.88;

    /* This is inside comment just to emphasize on the fact that this program is used for void pointer explanation;You can remove the comment and run it yourself in futureit's just for understanding. 
    char *cp=&ch;
    float *fp=&f;
    int *ip=&i;
    double *dp=&d;
    
    printf("%c\n",*cp); //A
    printf("%i\n",*ip); //11
    printf("%f\n",*fp); //90.99
    printf("%f\n",*dp); //90.88 */

    printf("Void Pointer Variables\n");
    void *vp=NULL;
    vp=&ch;
    printf("%c\n",*(char *)vp); //A

    vp=&f;
    printf("%f\n",*(float *)vp); //90.99

    vp=&i;
    printf("%i\n",*(int *)vp); //11

    vp=&d;
    printf("%f\n",*(double *)vp); //90.88
    return 0;
}