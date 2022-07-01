#include<stdio.h>
int main(){
int n,c,d,a[100],b[100];
scanf("%d",&n);        // elements in a[100]
for(c=0;c<n;c++){
    scanf("%d",&a[c]); //array input
}
for(c=n-1,d=0;c>=0;c--,d++){
    b[d]=a[c];
}
for(d=0;d<n;d++){
    printf("%d ",b[d]);
}
return 0;
}
