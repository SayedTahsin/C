#include <Stdio.h>
struct student
{
    int age;
    double cgpa;
    char name[100];
};
int main()
{
    struct student sayed;
    gets(sayed.name);
    sayed.age=20;
    sayed.cgpa=4.00;
    sayed.name[100]="tahsin\0";
    printf("%s\n%d\n%.2lf\n",sayed.name,sayed.age,sayed.cgpa);

    return 0;
}
