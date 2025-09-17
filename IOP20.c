#include<stdio.h>

int main()
{   int a,b,op;
    printf("Please enter the value of a\n");
    scanf("%d",&a);
    printf("Please enter the value of b\n");
    scanf("%d",&b);
    printf("Please enter the operator\n press 1 of multiplication\n press 2 for division\n press 3 for addition\n press 4 for subtraction\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("The final value after the operation is %d\n",a*b);
        break;
        case 2:
        printf("The final value after the operation is %d\n",a/b);
        break;
        case 3:
        printf("The final value after the operation is %d\n",a+b);
        break;
        case 4:
        printf("The final value after the operation is %d\n",a-b);
        break;
        
    }
    return 0;

}