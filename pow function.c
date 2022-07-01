#include<stdio.h>
long long pow(int x,int y){
int i;
long long d=1;
for(i=1;i<=y;i++){
    d*=x;
}
return d;
}
int main(){
int a,b;
long long p;
scanf("%d%d",&a,&b);
p=pow(a,b);
printf("%lld",p);
return 0;
}



