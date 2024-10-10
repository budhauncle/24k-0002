#include <stdio.h>
int main()
{
 int n,j,i,count,Max,Min;
 printf("\nEnter size of array:");
 scanf("%d",&n);
 int arr[n];
 for(i=0;i<n;i++)
 {
  printf("\nEnter element %d:",i);
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
  count=0;
  for(j=0;j<n;j++)
  {
   if(arr[i]>=arr[j])
   {
    count++;
    continue;
   }
    else
    break;
  }
  if(count==n)
  {
   Max=arr[i];
   break;
  }
 }
 for(i=0;i<n;i++)
  {
   count=0;
   for(j=0;j<n;j++)
   {
    if(arr[i]<=arr[j])
    {
     count++;
     continue;
    }
     else
     break;
   }
   if(count==n)
   {
    Min=arr[i];
    break;
   }
  }
 printf("\nMaximum=%d\nMinimum=%d",Max,Min);
}