#include<stdio.h>

int main()
{   int a,b;
    char x;
    printf("Please enter the value of a\n");
    scanf("%d",&a);
    printf("Please enter the value of b\n");
    scanf("%d",&b);
    printf("Please enter the operator\n press 1 of multiplication\n press 2 for division\n press 3 for addition\n press 4 for subtraction\n");
    scanf("%c", &x);
    switch(x)
    {
        case 'a':
        printf("The final value after the operation is %d\n",a*b);
        break;
        case 'b':
        printf("The final value after the operation is %d\n",a/b);
        break;
        case 'c':
        printf("The final value after the operation is %d\n",a+b);
        break;
        case 'd':
        printf("The final value after the operation is %d\n",a-b);
        break;
        
    }
    return 0;

}