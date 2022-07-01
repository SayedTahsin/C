#include <stdio.h>
int main()
{
    FILE *f;
    char a[100],b[100];
    f=fopen("testing file.txt","r+");
    scanf("%[^\n]",b);
    fscanf(f,"%[^\n]",a);//input from file
    printf("%s\n",a);
    fprintf("%s\n",b);//output to file
    return 0;

}
