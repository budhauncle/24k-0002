#include<stdio.h>
int main()
{
  int n,i,sum=0;
  printf("Enter number");
  scanf("%d",&n);
  while(n>0 && sum<10)
  {
   i=10;
   while(i>0);
   {
    if((n-i)%10==0)
    {break;}
    i--;
   }
   if(i!=10)
   {
    sum=sum+i;
    n=n-i;
   }
   n=n/10;
  }
  printf("\nSum till single digits is %d",sum);
}