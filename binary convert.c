#include<stdio.h>
int main(){
int arr[100],n,i=0;
scanf("%d",&n);
while(1){
    arr[i]=n%2;
    n/=2;
    i++;
    if(n==0)
        break;
}
for(i=i-1;i>=0;i--){
    printf("%d",arr[i]);
}
return 0;
}
