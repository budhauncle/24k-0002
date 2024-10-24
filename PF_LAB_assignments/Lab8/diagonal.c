#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter Array size:");
    scanf("%d",&n);
    int arr[n][n];
    for (i = 0; i<n; i++)
    {
        for (j = 0; j<n;j++)
        {
            printf("\nEnter element in row:%d col:%d =",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\ndiagonal elements are:");
    for (i = 0; i<n; i++)
    printf("\n%d",arr[i][i]);

}