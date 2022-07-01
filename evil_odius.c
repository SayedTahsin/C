#include<stdio.h>
int main()
{
    int n,x,count=0;
    scanf("%d",&n);
    x=n;
    while( n>0 )
    {
        count++;
        n=n/2;
    }
    if(count%2!=0)
        printf("ODIUS\n");
    else
        printf("Evil\n");
    return 0;
}
