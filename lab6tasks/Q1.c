#include<stdio.h>
int main()
{
 int n,sum=0;
 do
{
 printf("\nenter number");
 scanf("%d",&n);
 if(n==0)
 {break;}
 sum=sum+n;
 printf("Sum is%d",sum);
}
while(n!=0);
printf("\nfinal sum%d",sum);
}