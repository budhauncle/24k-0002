#include<stdio.h>
int main()
{
  int n;
  printf("Enter number");
  scanf("%d",&n);
  if(n%3==0 && n%5==0)
  {printf("\nNumber is divisible by 3 and 5");}
  else
  {printf("\nNumber is not divisible by either 3 or 5");}
}