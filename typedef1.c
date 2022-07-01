#include <stdio.h>
struct address{
    int roadno,holdingno;
    char thana[100],city[100];
};
 typedef struct{
    int age;
    char name;
    double cgpa;
    struct address add;
    }std;
int main(){
std sami={10,"samio",4.00};
printf("%.2lf",sami.cgpa);
return 0;
}
