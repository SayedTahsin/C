#include<stdio.h>
int main(){
    int i,n,count=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2!=0)count++;
    }
    printf("%lf",count/(double)n);
    return 0;
}
