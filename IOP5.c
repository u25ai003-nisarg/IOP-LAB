#include<stdio.h>
int main()
{   int a,b,c;
    printf("Please enter the value of a\n");
    scanf("%d",&a);
    printf("Please enter the value of b\n");\
    scanf("%d",&b);
    //calculation
     c=a+b;
     b=c-b;
     a=c-a;
    printf("The value of a,b,c after the swap are %d,%d,%d\n",a,b,c);


    return 0;
}