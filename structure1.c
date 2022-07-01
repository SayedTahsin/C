#include <stdio.h>
struct student{
    int age;
    char name[30];
    double cgpa;
};
int main(){
    typedef struct student std;
    std sami={10,"samio",4.00};

  printf("%s\n%d\n%lf",sami.name,sami.age,sami.cgpa);
    return 0;
}
