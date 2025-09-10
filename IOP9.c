#include<stdio.h>

int main()
{   
    int hour,minute,second,time;
    printf("Please enter the hours of the time\n");
    scanf("%d",&hour);
    printf("Please enter the minutes of the time\n");
    scanf("%d",&minute);
    printf("Please enter the seconds of the time\n");
    scanf("%d",&second);
    //calculation
    time=hour*3600+minute*60+second;
    printf("The time in seconds only is %ds",time);



}