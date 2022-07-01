#include<stdio.h>
int main(){
int a[100],n,c,t,end;
scanf("%d",&n);
end=n-1;
for(c=0;c<n;c++){
    scanf("%d",&a[c]);
}
for(c=0;c<n/2;c++,end--){
    t=a[c];
    a[c]=a[end];
    a[end]=t;
}

for(c=0;c<n;c++){
printf("%d ",a[c]);
}
return 0;
}
