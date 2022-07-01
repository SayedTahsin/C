#include <stdio.h>
#include<string.h>
int main(){
    int i,n,count=0;
    char str[100];
    gets(str);
    n=strlen(str);
    for(i=0;i<n;i++){ //(i=0;str[i]!='\0';i++)
        if(str[i]>='A' && str[i]<='Z')
            count++;
    }
    printf("%d",count);
    return 0;
}
