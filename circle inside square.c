#include <stdio.h>
#define pi 2*acos(0.0)
int main(){
    int T,i;
    double r,a[100];
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%lf",&r);
        a[i]=r*r*(4-pi);
        printf("Case %d: %.2lf\n",i+1,a[i]);
    }
    return 0;
}

