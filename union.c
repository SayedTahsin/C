#include <stdio.h>
/*typedef union{
    int shirt,pant;
}product;
int main(){
product p;
p.pant=50;
p.pant-=10;
printf("%d",p.shirt);
return 0;
}*/
typedef union
{
    int shirt,pant[2];
} product;
int main()
{
    product p;
    p.pant[0]=50;
    p.pant[1]=345;
    printf("%d",p.shirt);
    return 0;
}
