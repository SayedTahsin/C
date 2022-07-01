#include<stdio.h>
void cpy(char *narr,char *arr){
    int i;
    for(i=0;arr[i];i++)
        narr[i]=arr[i];
    narr[strlen(arr)]='\0';
}
void cat(char *narr,char *marr){
    int i,c;
    narr[strlen(narr)+strlen(marr)]='\0';
    for(i=0,c=strlen(narr);i<strlen(marr);i++,c++)
        narr[c]=marr[i];
}
int main(){
    int i;
    char arr[100],narr[100],marr[100];
    gets(arr);
    cpy(narr,marr);
    puts(narr);
    gets(marr);
    cat(narr,marr);
    puts(narr);
    return 0;
}
