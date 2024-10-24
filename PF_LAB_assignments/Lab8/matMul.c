#include<stdio.h>
int main()
{
    int i,j,arr1[3][3],arr2[3][3],res[3][3];
    printf("Enter Array1:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEnter value at row:%d column:%d:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter Array2:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEnter value at row:%d column:%d:",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            res[i][j]=(arr1[i][0]*arr2[0][j])+(arr1[i][1]*arr2[1][j])+(arr1[i][2]*arr2[2][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%3d",res[i][j]);
        }
        printf("\n");
    }
}