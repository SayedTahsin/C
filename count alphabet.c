#include<stdio.h>
#include<string.h>
int main()
{
    int i,arr[200]= {0};
    char str[200];
    gets(str);
    for(i=0; str[i]; i++)
    {
        arr[str[i]]++;
    }
    for(i='A'; i<='z'; i++)
    {
        if(arr[i]!=0)
            printf("%c = %d\n",i,arr[i]);
    }
    return 0;
}
