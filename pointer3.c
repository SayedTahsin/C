#include <stdio.h>
int main(){
int *p;
int a=10,b=5;
p=&b;
//p=p+1;
printf("%d %d %d\n",&p[0],&b,p[0]);
printf("%d %d %d\n",&p[1],&a,p[1]);
return 0;

}
