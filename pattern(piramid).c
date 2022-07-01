#include <stdio.h>
int main(){
    int n,i,j,s;
    scanf("%d",&n);
    s=n;
    for(i=1;i<=n;i++){      //row
        for(j=1;j<s;j++){   //space
            printf(" ");
        }
        s--;

    for(j=1;j<=2*i-1;j++){  //*print
        printf("*");
    }
    printf("\n");
}
return 0;
}
