#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y){
COORD c={x,y}; SetConsoleCursorePosition ( GetStdHandle (STD_OUTPUT_HANDALE),c);
}
int main(){
goyoxy(6,12);
printf("hey it's me.\n");
return 0;
}
