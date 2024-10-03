#include<stdio.h>
int main()
{
  int age;
  printf("Enter age");
  scanf("%d",&age);
  if(age<0)
  {printf("\nincorrect age");}
  else if(age<=12)
  {printf("\nChild");}
  else if(age<=20)
  {printf("\nTeenager");}
  else if(age<=40)
  {printf("\nAdult");}
  else 
  {printf("\nSenior");}
}