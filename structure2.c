#include <stdio.h>
struct address{
    int roadno,holdingno;
    char thana[100],city[100];
};
struct student{
    int age;
    char name;
    double cgpa;
    struct address add;
    };
    int main(){
    typedef struct student std;
    std sami = {10,"samio",4.00,{10,34,"halishahar","ctg"}};
    printf("%s",sami.add.city);
    return 0;
    }
