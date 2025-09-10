#include<stdio.h>

int main()
{
  int day,hour,minute,seconds;
  seconds=31558150;
  //calculation
  //day= 86400 seconds
  //hour=3600 seconds
  //minute=60 seconds
  day=seconds/86400;
  hour=(seconds-day*86400)/3600;
  minute=(seconds-day*86400-hour*3600)/60;
  printf("The revolution period of earth is %d days, %d hours, %d minutes.", day,hour,minute);
  return 0;
}