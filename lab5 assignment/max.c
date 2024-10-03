#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter numbers:");
  scanf("%d%d",&a,&b);
  (a>b)?printf("\n%d is greater",a):printf("\n%d is greater",b);
}