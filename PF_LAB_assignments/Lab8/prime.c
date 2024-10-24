#include <stdio.h>
int main()
{
    int s,e,i,k,chk;
    printf("Enter Start:");
    scanf("%d",&s);
    printf("Enter End:");
    scanf("%d",&e);
    for(i=s;i<=e;i++)
    {
        chk=0;
        for(k=2;k<i;k++)
        {
            if(i%k==0)
            {
                chk++;
                break;
            }
        }
        if(chk==0)
        printf("%d ",i);
    }
}