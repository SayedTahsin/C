#include<stdio.h>
int main(){
int m[100],n,i,count=0;
printf("number of input=");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&m[i]);
if(m[i]==1)
    count++;
}
printf("There are %d one.\n",count);
return 0;
}
