#include <stdio.h>
int main(){
int n,i,j,s;
scanf("%d",&n);
s=n;
for (i=1;i<=n;i++){
    for(j=1;j<s;j++){
        printf(" ");
    }
    s--;
    for(j=1;j<=2*i-1;j++){
        printf("*");
    }
    printf("\n");
}
for(i=1;i<n;i++){
    for(j=1;j<=i;j++){
        printf(" ");
    }
    for(j=1;j<=2*(n-i)-1;j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}
