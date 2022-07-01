#include<stdio.h>
char *shift (char *str){

    for(int i=0; str[i]; i++)
    {
        if(str[i]=='Z'||str[i]=='z')
            str[i]='*';
        else
            str[i]++;
    }
    return str;
}
int main(){
    char s[100];
    gets(s);
    shift(s);
    puts(s);
    return 0;
}
