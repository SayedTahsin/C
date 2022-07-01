#include <stdio.h>
#include<string.h>
void rev(char *str);
int main()
{
    char str[100];
    gets(str);
    rev(str);
    puts(str);
    return 0;
}
void rev (char *str)
{
    int i,n,temp;
    n=strlen(str);
    for(i=0; i<(n/2); i++,n--)
    {
        temp=str[i];
        str[i]=str[n-1];
        str[n-1]=temp;
    }
    return;
}
