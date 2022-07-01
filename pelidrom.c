#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,n,count=0;
    char str[100];
    gets(str);
    n=strlen(str);
    a=n;
    for(i=0; str[i]; i++,n--)
    {
        if(str[i]==str[n-1])
            count++;
    }
    if( a == count)
        printf("yes, it's Pelidrom.\n");
    else
        printf("No, it's not pelidrom.\n");
    return 0;
}

