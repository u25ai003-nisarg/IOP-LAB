#include<stdio.h>

int main()
{
    int a,b,c,x,z;
    printf("PLease enter the value of a\n");
    scanf("%d",&a);
    printf("PLease enter the value of b\n");
    scanf("%d",&b);
    printf("PLease enter the value of c\n");
    scanf("%d",&c);
    z=(a>b&&a>c)?(x=a):((b>a&&b>c)?(x=b):(x=c));
    printf("The maximum number is %d",x);
    return 0;

     
}