#include<stdio.h>
int main()
{
 int sum=0,a,s,e;
 printf("enter starting and ending point:");
 scanf("%d%d",&s,&e);
 if(s%2!=0);
 s=s+1;
 for(a=s;a<=e;a=a+2)
 {sum=sum+a;}
 printf("sum is %d",sum);
 return 0;
}