#include<stdio.h>
int main()
{
  int ch,key;
  printf("Enter character");
  scanf(" %c",&ch);
  printf("\nEnter key");
  scanf(" %c",&key);
  printf("before encryption:%c"ch);
  ch=ch << key;
  printf("after encryption:%c"ch);
  ch=ch >> key;
  printf("after decryption:%c"ch);
}