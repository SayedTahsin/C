#include<stdio.h>
#include<string.h>
int main(){
int i,a,e,I,o,u;
a=e=I=o=u=0;
char str[100];
gets(str);
for(i=0;str[i];i++){
    if(str[i]=='A'||str[i]=='a')
        a++;
    if(str[i]=='E'|| str[i]=='e')
        e++;
    if(str[i]=='I'||str[i]=='i')
        I++;
    if(str[i]=='O'||str[i]=='o')
        o++;
    if(str[i]=='U'||str[i]=='u')
        u++;
}
printf("A: %d\n",a);
printf("E: %d\n",e);
printf("I: %d\n",I);
printf("O: %d\n",o);
printf("U: %d\n",u);
return 0;

}
