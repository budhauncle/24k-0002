#include<stdio.h>
int main()
{
 int n,i,sum;
 printf("Enter Size of Array:");
 scanf("%d",&n);
 int num[n];
 printf("\nEnter %d numbers",n);
 for(i=0;i<n;i++)
 {
 printf("\nEnter value at index %d:",i);
 scanf("%d",&num[i]);
 }
 printf("\nSum of elements:");
 for(i=0;i<n;i++)
 {
  sum=sum+num[i];
 }
 printf(" %d",sum);
}