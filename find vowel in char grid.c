#include <stdio.h>
int main()
{
    int i,j,n,x1,x2,y1,y2,count=0;
    char str[100][100];
    scanf("&d\n",&n);
    for(i=0; i<n; i++)
    {
        gets(str[1]);
    }
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    for(i=x1-1; i<x2; i++)
    {
        for(j=y1-1; j<y2; j++)
        {
            if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
