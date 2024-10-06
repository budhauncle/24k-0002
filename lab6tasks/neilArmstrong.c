#include<stdio.h>
int main()
{
  int num,n,i,sum=0;
  printf("Enter number:");
  scanf("%d",&n);
  num=n;
  while(n!=0)
  {
   i=10;
   while(i>1)
   {
    if((n-i)%10==0)
    break;
    i--;
   }
   if(i!=10)
   {
    sum=sum+(i*i*i);
    n=n-i;
   }
   n=n/10;
  }
  if(sum==num)
  printf("\n%d is an armstrong number",num);
  else
  printf("\n%d is not an armstrong number",num);
}
