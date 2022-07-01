#include <stdio.h>
struct student{
    int age;
    char name[30];
};
int main(){
    typedef struct student std;
    std sami,bb;
    sami.age=10;
    gets(bb.name);
    puts(bb.name);
    return 0;
}
