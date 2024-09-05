#include<stdio.h>
int main()
{
  int a,b,temp;                                             //numbers and temporary variablle
  printf("Enter Numbers:");                                 
  scanf("%d%d",&a,&b);                                     //input  
  printf("\nbefore:\na is %d\nb is %d",a,b);                //values before swaping
  temp=a;                                                   //swaping values
  a=b;
  b=temp;
  printf("\nafter:\na is %d\nb is %d",a,b);                 //values after swaping
  return 0;
}
