#include<stdio.h>
int main()
{
  float sal,TRate,ToPay;                                             //salary taxrate and ammout to be paid
  printf("Enter salary then tax rate:");                                 
  scanf("%f%f",&sal,&TRate);                                     //input  
  ToPay=(TRate/100)*sal;                                          //calculating tax
  printf("\nYou will pay Rs%f tax\nSalary after tax:%f",ToPay,sal-ToPay);        //tax to be paid and remaing saary
  return 0;
}
