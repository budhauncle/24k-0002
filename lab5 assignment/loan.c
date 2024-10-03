#include<stdio.h>
int main()
{
 int age,inc,credS;
 printf("Enter age,income,creditscore:");
 scanf("%d%d%d",&age,&inc,&credS);
 if(age>=18 && inc >+ 100000 && credS>=50)
 printf("\nYou are eligible for loan");
 else
 printf("\nYou are ineligible for loan");
}