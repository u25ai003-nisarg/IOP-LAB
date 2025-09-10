#include<stdio.h>

int main()
{
  int amount,interest,money,years;
  printf("Please enter the amount\n");
  scanf("%d",&amount);
  printf("Please enter the interst in percentage\n");
  scanf("%d",&interest);
  printf("Please enter the time in years\n");
  scanf("%d",&years);
  //calculation
  money=amount+((amount*interest*years)/100);
  printf("The final calculated amount is %d\n",money);
  return 0;
}