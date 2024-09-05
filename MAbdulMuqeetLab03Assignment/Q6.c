#include<stdio.h>
int main()
{
  float slope,x1,y1,x2,y2;                                //points and slope
  printf("enter x1 y1 x2 y2:");                             
  scanf("%f%f%f%f",&x1,&y1,&x2,&y2);                           //prompt
  slope=(y2-y1)/(x2-x1);                                  //calc slope
  printf("\nslope is %3f",slope);                        //outputing slope with restricting float to 3 decimal places
  return 0;
}
