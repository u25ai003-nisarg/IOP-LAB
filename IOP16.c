#include<stdio.h>
int main()
{
    int a,b,c;
    printf("PLease enter the value of a\n");
    scanf("%d",&a);
    printf("PLease enter the value of b\n");
    scanf("%d",&b);
    printf("PLease enter the value of c\n");
    scanf("%d",&c);

    if(a>=b)
    {
        if(a>=c)
        {
            printf("the maximum of a,b and c is %d(a)",a);
        }
        else
        {
            printf("the maximum of a,b and c is %d(c)",c);
        }
    }
    else
    {
        if(b>=c)
        {
            printf("the maximum of a,b and c is %d(b)",b);
        }
        else
        {
            printf("the maximum of a,b and c is %d(c)",c);
        }
    }

    return 0;
}