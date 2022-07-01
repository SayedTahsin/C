#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,x;
    char a[100],b[100];
    gets(a);
    n=strlen(a);
    x=n;
    for(i=0; a[i]; i++,n--)
    {
        b[n-1]=a[i];
    }
    b[x]='\0';
    puts(b);
    return 0;
}
