#include <stdio.h>
int arraysum(int *p, int n)
{
    int i,s=0;
    for(i=0; i<n; i++)
        s+=p[i];
    return s;
}
int main()
{
    int arr[100]= {7,8,9,3,17,10,88};
    int sum;
    sum =arraysum(arr,5);
    printf("%d",sum);
    return 0;
}
