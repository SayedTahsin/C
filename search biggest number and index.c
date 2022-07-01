#include<stdio.h>
int main()
{
    int x,y,n,count=1,z,a,th;
    scanf("%d",&n);
    scanf("%d",&a);
    for(x=1; x<n; x++)
    {
        scanf("%d",&y);
        count++;
        if(y>a)
        {
            z=y;
            a=z;
            th=count;
        }
        if(y<a)
        {
            th=count;
            z=a;
        }
    }
    printf("%d is the bigets number.\n",z);
    printf("%d th(this is incorrect)\n",th-1);
    return 0;

}
