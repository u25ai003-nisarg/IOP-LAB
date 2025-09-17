#include<stdio.h>

int main()
{   int a,b,m=1;
    printf("Please enter the number\n");
    scanf("%d",&a);
    printf("Please enter the power\n");
    scanf("%d",&b);
    for (int i=1;i<=b;i++)
    {   
        m=m*a;
        printf("%d\n",m);
    }  
    
    return 0;
}