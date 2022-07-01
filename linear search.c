#include<stdio.h>
int main()
{
    int arr[100],s,i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]); //elements in array
    }
    scanf("%d",&s);
    for(i=0; i<n; i++)       //search
    {
        if(arr[i]==s)
        {
            printf("%d is present in %d\n",s,i+1);
            break;
        }
    }
    if(i==n)
        printf("%d isn't present in thr array.",s);
    return 0;
}
