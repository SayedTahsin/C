#include <stdio.h>
int abs(int a)
{
    return (a<0)? -a :a ;
}
int main()
{
    int a,b;
    scanf("%d",&a);
    b=abs(a);
    printf("%d",b);
    return 0;
}
