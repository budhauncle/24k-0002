#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter numbers");
  scanf("%d%d",&a,&b);
  printf("\nBefore swaping a=%d b=%d",a,b);
  a=a^b;b=b^a;a=a^b;
  printf("\nAfter swaping a=%d b=%d",a,b);

}