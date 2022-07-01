#include <stdio.h>
int main()
{
    int i,a,b,c=1;
    scanf("%d%d",&a,&b);
    for(i=0; i<b; i++)
    {
        c*=a;
    }
    printf("%d",c);
    return 0;
}
