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
  {printf("\nNumber is prime");
   int n1=0,n2=1,sum=0;
   printf("\nFabionacci sequence:\n%d %d",n1,n2);
   while(sum<n)
   {sum=n1+n2;
    n1=n2;n2=sum;
    if(sum>n)
    {continue;}
    printf(" %d",sum);
   }
  }
  else
  {printf("\nNumber is not prime");}
}