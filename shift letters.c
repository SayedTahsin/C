#include <stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char str[100];
    gets(str);
    n=strlen(str);
    for(i=0; i<n; i++) //(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<'Z' || str[i]>='a' && str[i]<'z')
            str[i]++;
        else if (str[i]=='Z' || str[i]=='z')
            str[i]-=25;
        else if(str[i]>='0' && str[i]<'9')
            str[i]++;
        else if(str[i]=='9')
            str[i]='0';
        else
            str[i]='*';
    }
    puts(str);
    return 0;
}
