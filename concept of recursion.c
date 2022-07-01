#include<stdio.h>
void p(n){
if(n==0) return ;
printf("%d ",n);
p(n-1);
printf("a");
}
int main(){
p(5);
return 0;
}
