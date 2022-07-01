#include <stdio.h>
#include<math.h>
int main(){
      int a,b,x,count=0;
    while(scanf("%d%d",&a,&b)!=EOF){
            for(;a<=b;a++){
            x=sqrt(a);
            if(pow(x,2)==a)
                count++;
    }
    printf("%d",count);
        return 0;
    }
}



