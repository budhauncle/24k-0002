#include<stdio.h>
int main()
{
  int n;
  printf("Enter number");
  scanf("%d",&n);
  (n>0) ?printf("\npositive"):(n<0)?printf("\nnegative"):printf("\nzero");
}