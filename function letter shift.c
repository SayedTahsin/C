#include<stdio.h>
char *shift(char *str)
{
    int i;
    for(i=0; str[i]; i++)
    {
        str[i]++;
    }
    return str;
}
int main()
{
    char s[100];
    gets(s);
    shift(s);
    printf("%s",s);
    return 0;
}
