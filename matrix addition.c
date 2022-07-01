#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],s[10][10],i,j,r,c;
    scanf("%d%d",&r,&c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&b[i][j]);
        }

    }
    printf("\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                printf("%d ",s[i][j]);
            }
printf("\n");
        }
 return 0;
}
