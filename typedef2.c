#include<stdio.h>
struct address{
int road,flat;
char thana[100],city[100];
};
typedef struct{
int age;
char name[100];
double cgpa;
struct address add;
}std;
int main(){
std s[100];
s[0].age=19;
s[0].cgpa=4.00;
printf("%d",s[0].age);
return 0;
}
