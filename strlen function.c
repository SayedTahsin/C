#include<stdio.h>
int strlen(char *str)
{
    int i,count=0;
    for(i=0; str[i]; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char s[100];
    gets(s);
    int len = strlen(s);

    printf("%d",len);
    return 0;
}
