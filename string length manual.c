#include<stdio.h>
#include<string.h>
int main(){
char name[100];
gets(name);
int i,count=0;
for(i=0;name[i]!='\0';i++){
    if(name[i]!=' ')
        count++;
}
printf("%d",count);
return 0;
}
