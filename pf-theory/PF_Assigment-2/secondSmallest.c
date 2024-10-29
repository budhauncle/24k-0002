#include<stdio.h>
int main()
{
	int i,arr[5],sml2,sml;
	for(i=0;i<5;i++)
	{
	   printf("\nEnter Number %d:",i+1);
	   scanf("%d",&arr[i]);
	   if(i==1)
	   {
	   	sml=arr[i];
	   	sml2=arr[i];
	   }
	   if(arr[i]<=sml2)
	   {
	   	if(arr[i]<=sml)
	   	{
		 sml2=sml;
	   	 sml=arr[i];
	    }
	   	else
	   	 sml2=arr[i];
	   }
	   if(arr[i]>=9999)
	   {
	   	printf("\nEnter a valid number");
	   	i--;
	   }
    }
    printf("\nSecond smalest is %d",sml2);
    
}
