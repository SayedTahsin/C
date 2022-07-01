//1 11 111 1111 11111...
#include <stdio.h>
int main(){
int n,x=1,i,sum=1;
scanf("%d",&n);
for(i=1;i<n;i++){
    x=x*10+1;
    sum+=x;
}
printf("%d",sum);
return 0;
}
