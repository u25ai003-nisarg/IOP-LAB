#include<stdio.h>

int main()
{   int z;
    char i;
    printf("Please enter any character\n");
    scanf("%c",&i);
    z=(97<=(int) i<=120)?1:0;
    if(z=1)
    {
        printf("your character is small case letter\n");
    }
    else
    {
        printf("your number is not small case letter\n");
    }
    return 0;
}