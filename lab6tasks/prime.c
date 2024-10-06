#include<stdio.h>
int main()
{
  int n,i,P=1;
  printf("Enter number:");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
   if(n%i==0)
   {P=0;}   
  }
  if(P==1)
  {printf("\nNumber is prime");}
  else
  {printf("\nNumber is not prime");}
}