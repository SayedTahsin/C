#include<stdio.h>
int main(){
int *pt,x=5;
pt=&x;
*pt=15;
printf("%d\n%d\n%d",x,pt,*pt);
return 0;
}

