#include<stdio.h>

int main()
{  int a;
    printf("Please enter the number\n");
    scanf("%d",&a);
    //checking if even or not
    int b;
    b=a%2;
    if(b==1)
    {
      printf("The number you entered is ODD\n");
    }
    else
    {
      printf("The number you enter is EVEN");
    }
    return 0;

}
