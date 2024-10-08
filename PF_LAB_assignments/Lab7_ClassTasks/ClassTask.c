#include<stdio.h>
int main()
{
	int B,n,arr[]={1,12,4,2,3,25,45,4,34,6,2,6,47,5,6,758,7,4,6,5,26,4,74};
	printf("Enter value:");
	scanf("%d",&n);
	for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
	{
	  if (arr[i]==n)
	  {
	  	B=1;
	  	break;
	  }
    }
   if(B==1)
   {
   	printf("\nValue is in array");
   }
   else
   {
   	printf("\nValue is in not array\a\a\a\a\a\a\a\a\a\a");
   }
}