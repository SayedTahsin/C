#include <stdio.h>
int main(){
int *p,*q;
int a=5;
p=&a;
printf("%d\n",*p);//5
printf("%d\n",p);//6356728
p=p+1;
printf("%d",p);//6356732
return 0;
}

