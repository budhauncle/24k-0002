#include<stdio.h>
int main()
{
  int n,count=0;
  printf("Enter number");
  scanf("%d",&n);
  while(n>0)
  {
   if(n & 1)
   {count++;}
   n= n >> 1;
  }
  printf("\nnumber of 1s are %d",count);
}