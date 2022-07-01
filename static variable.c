#include <stdio.h>

void fun(){
static int x;//x=0 by default and only execute the line once(cz of static)
x++;
printf("%d\n",x);
return ;
}
int main(){
fun();
fun();
fun();
return 0;
}
