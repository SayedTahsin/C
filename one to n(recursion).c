#include<stdio.h>
void p(int n)
{
    if(n==0)
        return ;
    p(n-1);
    printf("%d ",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    p(n);
    return 0;
}
