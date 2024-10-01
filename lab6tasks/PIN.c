#include<stdio.h>
int main()
{
 int pin,count=0;
 do 
 {
  printf("enter pin:");
  scanf("%d",&pin);
  count++;
  if(count==3)
  break;
 }
while(pin!=5678);
 if(pin==5678)
 printf("\nAccess granted");
 else
 printf("\nAccess Denied");
return 0;
}