#include<stdio.h>
int strlenght(char *arr){
    int i;
    for(i=0;arr[i];i++){}
    return i;
}
int cmp(char *arr,char *narr){
    int i,s1=0,s2=0,n;
    if(strlen(arr)<strlen(narr))
        n=strlen(narr);
    else
        n=strlen(arr);
    for(i=0;i<n;i++){
        s1+=arr[i];
        s2+=narr[i];
        if(s1>s2)
            return 1;
        if(s2>s1)
            return -1;
    }
    if(s1==s2)
        return 0;
}
int main(){
    char arr[100],narr[100];
    gets(arr);
    printf("%d\n",strlenght(arr));
    gets(narr);
    printf("%d\n",cmp(arr,narr));
    return 0;
}
