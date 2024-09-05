#include<stdio.h>
int main()
{
  float favg,f1,f2,fcost;                                    //averagefuel,bothway prices,total cost
  do                                                         //do once before checking looping condiotion
  {
   printf("\nEnter Average fuel consumption per kilometer:"); //prompt
   scanf("%f",&favg);                                         //input
   if(favg<0)                                                 //if negative prompt user to enter positive
   {printf("\nValue must be positive");}
  }
  while(favg<0);                                              //loop till user enters positive
  f1=favg*1207;                                                //calculations
  f2=favg*1207;
  fcost=(f1*118)+(f2*123);
  printf("\nfule consumed:%fL\nfule cost:Rs%f",f1+f2,fcost);  //fuel consumed and price
  return 0;
}
