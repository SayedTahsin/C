#include <stdio.h>
#define f for
int main(){
    int i,j,s=0,d,n,x;
    scanf("%d",&n);
    d=n;
    f(x=0;x<d;x++){
        f(i=0;i<s;i++)
            printf(" ");
        f(j=0;j<n;j++)
        printf("c");
    printf("\n");
    s++;
    n--;
    }
    return 0;
}
