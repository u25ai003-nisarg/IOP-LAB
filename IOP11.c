#include<stdio.h>

int main()
{
  int day,hour,minute,seconds;
  printf("Please enter the time in seconds\n");
  scanf("%d",&seconds);
  //calculation
  //day= 86400 seconds
  //hour=3600 seconds
  //minute=60 seconds
  day=seconds/86400;
  hour=(seconds-day*86400)/3600;
  minute=(seconds-day*86400-hour*3600)/60;
  printf("The time is %d days, %d hours, %d minutes.", day,hour,minute);
  return 0;
}