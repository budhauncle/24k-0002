#include<stdio.h>
int main()
{
  float P,R,T,interest;                                    //declaring variables
  do                                                         //do once before checking looping condition
  {
   printf("\nenter principal"); //prompt
   scanf("%f",&P);                                         //input
   if((P<100)||(P>1000000))                                                 
   {printf("\nValue must be between 100 and 1000000");}
  }
  while((P<100)||(P>1000000));                              //loop till value is within range
do                                                         
  {
   printf("\nenter rate of interest");                         //similar structure for remaining inputs
   scanf("%f",&R);                                         
   if((R<5)||(R>10))                                                 
   {printf("\nValue must be between 5 and 10");}
  }
  while((R<5)||(R>10));
do                                                         
  {
   printf("\nenter Time period"); 
   scanf("%f",&T);                                         
   if((T<1)||(T>10))                                                 
   {printf("\nValue must be between 1 and 10");}
  }
  while((T<1)||(T>10));
interest=P*(R/100)*T;                                             //calculate interest
printf("\ninterest is %f",interest);                               //print interest
return 0;
}
