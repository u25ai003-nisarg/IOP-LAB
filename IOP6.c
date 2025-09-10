#include<stdio.h>
int main()
{

    int a,b;
    printf("Please enter the value of a\n");
    scanf("%d",&a);
    printf("Please enter the value of b\n");\
    scanf("%d",&b);
    //calculation
     a=a+b;
     b=a-b;
     a=a-b;

    printf("The value of a,b after the swap are %d,%d\n",a,b);


    return 0;
}