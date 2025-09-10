#include<stdio.h>
int main()
{   float x1,y1,x2,y2,x3,y3,area;
    printf("Please enter the x coordinate of 1st point\n");
    scanf("%f",&x1);
    printf("Please enter the y coordinate of 1st point\n");
    scanf("%f",&y1);
    printf("Please enter the x coordinate of 2nd point\n");
    scanf("%f",&x2);
    printf("Please enter the y coordinate of 2nd point\n");
    scanf("%f",&y2);
    printf("Please enter the x coordinate of 3rd point\n");
    scanf("%f",&x3);
    printf("Please enter the y coordinate of 3rd point\n");
    scanf("%f",&y3);
    //calculation
    area=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
    printf("The area of triangle in square units is %f",area);

    
    return 0;

}
