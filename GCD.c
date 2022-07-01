#include<stdio.h>
int main(){
int a,b,temp,y;
scanf("%d%d",&a,&b);
if(b>a){
    temp=a;
    a=b;
    b=temp;
}
while(a%b!=0){
    y=b;
    b=a%b;
    a=y;
}
printf("GCD :%d",b);
return 0;
}
