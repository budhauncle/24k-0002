#include<stdio.h>
int main()
{
 int sum,i;
 int temp[7];
 for(i=0;i<7;i++)
 {
  printf("\nEnter temprature on day %d:",i+1);
  scanf("%d",&temp[i]);
  sum+=temp[i];
 }
 printf("\nAverage temprature was:%d",sum/7);
 for(i=0;i<7;i++)
 {
  if(temp[i]>40 || temp[i]<0)
  printf("\nExtreme temprature on day %d",i+1);
 }
}