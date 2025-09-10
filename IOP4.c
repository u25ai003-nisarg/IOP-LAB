#include<stdio.h>
int main()
{ //
  float c,f;
  printf("Please enter the fahrenhite temperature \n");
  scanf("%f",&f);
  //calculation
  c=(f-32)*5/9;
  printf("The celcuis value is : %f",c);
  return 0;

}