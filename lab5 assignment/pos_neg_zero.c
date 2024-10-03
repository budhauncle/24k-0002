#include<stdio.h>
int main()
{
  int n;
  printf("Enter number:");
  scanf("%d",&n);
  if(n<0)
  {printf("\nNumber is negative");}
  else if(n==0)
  {printf("\nNumber is zero");}
  else 
 {
  printf("\nNumber is positive");
  if(n%2==0)
  {printf("\nNumber is even");}
  else
  {printf("\nNumber is odd");}
 }
}