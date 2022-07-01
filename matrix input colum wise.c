//incorrect
#include <stdio.h>
int main()
{
    int a[10][10],i,j,r,c;
    scanf("%d%d",&r,&c);
    for(j=0; j<c; j++)
    {
        for(i=0; i<r; i++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0; j<c; j++)
    {
        for(i=0; i<r; i++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
