#include<stdio.h>
int main()
{  
    float s1,s2,s3,s4,s5,total,percentage;
    printf("Please enter the marks of subject 1 out of hundred\n");
    scanf("%f",&s1);
    printf("Please enter the marks of subject 2 out of hundred\n");
    scanf("%f",&s2);
    printf("Please enter the marks of subject 3 out of hundred\n");
    scanf("%f",&s3);
    printf("Please enter the marks of subject 4 out of hundred\n");
    scanf("%f",&s4);
    printf("Please enter the marks of subject 5 out of hundred\n");
    scanf("%f",&s5);
    //calculation
    total=s1+s2+s3+s4+s5;
    percentage=total/5;
    printf("Total marks obtained is %f\n",total);
    printf("Total percentage marks obtained is %f\n",percentage);

    return 0;

}
