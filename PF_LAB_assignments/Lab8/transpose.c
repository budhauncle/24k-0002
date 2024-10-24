#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of coulumns:");
    scanf("%d",&c);
    int arr[r][c],trans[c][r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("row:%d column:%d :",i,j);
           scanf("%d",&arr[i][j]);
           trans[j][i]=arr[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%3d",trans[i][j]);
        }
        printf("\n");
    }       
}