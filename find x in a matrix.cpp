#include<bits/stdc++.h>
int main(){
    int a[100][100],i,j,x,b,n,count=0;
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++){
        b=0;
        for(j=0;j<n;j++){
            b+=(i+1);
            a[i][j]=b;
            if(a[i][j]==x)
        count++;
        }
    }
    printf("%d\n",count);
    return 0;
}





/*
#include<stdio.h>
int main()
{
    int i,j,a,x,n,count=0;
    scanf("%d%d",&n,&x);
    for(i=1; i<=n; i++)
    {
        a=1;
        for(j=i; a<=n; j=j+i,a++)
        {
            if(j==x)
                count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
*/