#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,n1;
    char str[100],str1[100];
    gets(str);
    gets(str1);
    n=strlen(str);
    n1=strlen(str1);
    for(i=0; str1[i]!='\0'; i++,n++)
    {
        str[n]=str1[i];
        str[n+n1]='\0';
    }
    puts(str);
    return 0;
}
