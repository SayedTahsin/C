//fibonacchi: 1 1 2 3 5 8 12 21 34 55 ...
#include <stdio.h>
int main()
{
    int i,a=1,b=1,n,c=1;
    scanf("%d",&n);
    if(n<=2)
        c=1;
    else
    {
        for(i=0; i<(n-2); i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d\n",c);

    }
    return 0;
}
