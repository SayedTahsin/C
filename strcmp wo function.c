#include<stdio.h>
#include<string.h>
int main()
{
    int x,i=0;
    char a[100],b[100];
    gets(a);
    gets(b);
    x=a[i]-b[i];
    for(i=1; a[i]; i++)
    {
        if(x==0)
            x=a[i]-b[i];
    }
    if(x<0)
        x=-1;
    else if(x>0)
        x=1;
    else
        x=0;
printf("%d",x);
    return 0;
}
