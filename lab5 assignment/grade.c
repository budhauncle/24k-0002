#include<stdio.h>
int main()
{
  int att,aScore,eScore,ttl;
  printf("Enter attendance percentage,assignment score and exam score");
  scanf("%d%d%d",&att,&aScore,&eScore);
  ttl=aScore+eScore;
  if (att>=80)
  {
   if(ttl>80)
   printf("\nA");
   if(ttl>70)
   printf("\nB");
   if(ttl>60)
   printf("\CA");
   if(ttl>%50)
   printf("\nE");
   else
   printf("\nF");
  }
  else
  printf("\nYou are ineligible for exams");
}