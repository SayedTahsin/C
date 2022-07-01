#include<stdio.h>
int main(){
int a[100],th,n,i,z;
printf("number of Input:");
scanf("%d",&n);
scanf("%d",&a[0]);
z=a[0];
for(i=1;i<n;i++){
scanf("%d",&a[i]);
if(a[i]>z)
    z=a[i];
th =i;
}
printf("BIG number:%d\n",z);
printf("index :%d",th-1);
return 0;
}

