#include<stdio.h>
int main()
{
  int age;
  char cit;
  printf("Enter age");
  scanf("%d",&age);
  printf("\Are you a citizen (Y N)");
  scanf("%c",&cit);
  if(age>=18 && cit=='Y')
  {printf("\You are eligible to vote");}
  else
  {printf("\You are ineligible to vote");}
}