#include<stdio.h>
int main(){
    int a,b,c,d,temp;
    scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b){temp=a;a=b;b=temp;}
if(c>d){temp=c;c=d;d=temp;}
if(a>c){temp=a;a=c;c=temp;}
if(b>d){temp=b;b=d;d=temp;}
if(b>c){temp=b;b=c;c=temp;}
printf("%d\n%d\n%d\n",d-a,d-b,d-c);
return 0;
}
