#include<stdio.h>
int main()
{
  int count=0,i=1;
  char ch;
  
  while(i==1)
  {
   printf("\n did you post today Y N :");
   scanf(" %c",&ch);
   if(ch=='Y')
   {count++;
    printf("\n current streak:%d",count);
   }
   else if(ch=='N')
   {break;}

  }
  printf("your streak ended at %d",count);
return 0;
}