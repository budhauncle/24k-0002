#include<stdio.h>
int main()
{
    int r,c,i,j,max,p1,p2;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of coulumns:");
    scanf("%d",&c);
    int arr[r][c];
    max=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("row:%d column:%d :",i,j);
           scanf("%d",&arr[i][j]);
           if (arr[i][j]>max)
           {
            max=arr[i][j];p1=i;p2=j;
           }
        }
    }
    printf("\nMaximum Point is %d \noccurs at index %d,%d",max,p1,p2);
    
}