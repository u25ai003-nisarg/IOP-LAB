#include<stdio.h>

int main()
{  
    int M,P,C,E,CM;
    printf("Please enter the marks in mathematics out of 200\n");
    scanf("%d",&M);
    printf("Please enter the marks in physics out of 200\n");
    scanf("%d",&P);
    printf("Please enter the marks in chemistry out of 200\n");
    scanf("%d",&C);
    printf("Please enter the marks in entrance examination out of 100\n");
    scanf("%d",&E);
    // calculation
    CM = M/2 + P/2 + C/2 + E;
    printf("The cutoff marks of the student is %d\n",CM);
    return 0;


}