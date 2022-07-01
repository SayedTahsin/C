#include<stdio.h>
#include<string.h>
int main(){
int i;
char str[100];
gets(str);
for (i=0;str[i]!='\0';i++){
    if(str[i]>='a' && str[i]<='z')
        str[i]-=32;
}
puts(str);
return 0;
}
