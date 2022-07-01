#include <stdio.h>
int big(int x,int y){
return (y>x)?y:x;
}
int main(){
int x,y;
scanf("%d%d",&x,&y);
printf("big nmbr:%d",big(x,y));
return 0;
}
