#include<stdio.h>
int main()
{
  int y;
  printf("Enter year");
  scanf("%d",&y);
  if(y%400==0)
  printf("\nleap year");
  else if(y%4==0 && y%100!=0)
  printf("\nleap year");
  else
  printf("\nnot a leap year");
}