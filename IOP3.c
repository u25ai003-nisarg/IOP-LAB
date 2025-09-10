#include<stdio.h>

int main()
{   int basic,HRA,other,bonus,perquisits,Gross;
    printf("Please enter the basic salary\n");
    scanf("%d",&basic);
    printf("Please enter the HRA\n");
    scanf("%d",&HRA);
    printf("Please enter the other allowances\n");
    scanf("%d",&other);
    printf("Please enter the bonus\n");
    scanf("%d",&bonus);
    printf("Please enter the perquisits\n");
    scanf("%d",&perquisits);
    //calculation
    Gross=basic+HRA+other+bonus+perquisits;
    printf("The gross salary is %d\n",Gross);

    return 0;
}