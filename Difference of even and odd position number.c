#include <stdio.h>
int main(){
int m[100],n,i,ev=0,od=0;
printf("Number of Input :");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&m[i]);
    if(i%2==1)
        od+=m[i];
    if(i%2==0)
        ev+=m[i];
}
if(od>ev)
    printf("difference :%d",od-ev);
else
    printf("difference :%d",ev-od);
return 0;
}
