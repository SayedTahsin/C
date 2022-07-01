#include<stdio.h>
int main(){
int a[100],b[100],s[100],i,n;
scanf("%d",&n); //size of array
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
     scanf("%d",&b[i]);
}
for(i=0;i<n;i++){
     s[i]=a[i]+b[i];
    printf("%d ",s[i]);
}
return 0;
}
