#include<stdio.h>
int main(){
    int j,s,b,T,i,n,m,a,sum;
    scanf("%d",&T);
    for(s=0;s<T;s++){
            sum=0;
            b=0;
            i=1;
            scanf("%d%d",&n,&m);
        while(i<=n){
                a=0;
            for(j=i;j<i+m;j++){
                a+=j;
            }
            sum-=a;
            i+=m;
            b=(i+m);
            for(;i<b;i++){
                sum+=i;
            }
        }
        printf("Case %d: %d\n",s+1,sum);
    }
    return 0;
}

