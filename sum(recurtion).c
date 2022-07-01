#include <stdio.h>
int sum();
int main()
{
    int a,n;
    scanf("%d",&n);
    a=sum(n);
    printf("%d",a);
    return 0;

}
int sum(int n)
{
    if(n==1)
        return 1;
    return n+sum(n-1);

}
