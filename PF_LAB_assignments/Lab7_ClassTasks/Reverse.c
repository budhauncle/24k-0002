#include<stdio.h>
int main()
{
 int n,i;
 printf("Enter Size of Array:");
 scanf("%d",&n);
 int num[n];
 printf("\nEnter %d numbers",n);
 for(i=0;i<n;i++)
 {
 printf("\nEnter value at index %d:",i);
 scanf("%d",&num[i]);
 }
 printf("\nReverse order:");
 for(i=i-1;i>=0;i--)
 {
   printf(" %d",num[i]);
 }
}