#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int s,int l,int num)
{
    int mid;
    int start=s;
    int last=l;
    while (start <= last)
    {
        mid = (start + last) / 2;
        if (arr[mid] > num)
            last = mid -1;
        else if (arr[mid] < num)
            start = mid + 1;
        else
            return mid;
    }
    return -1;
}
int main()
{
    int n,arr[100],l,f,num;
    cout<<"Array Size: ";
    cin>>n;
    cout<<"Array Input: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    cout<<"Element TO search: ";
    cin>>num;

    int r= binary(arr,0,n-1,num);

    if(r==-1)
        cout<<"Element not Found.\n";
    else
        cout<<"Element found."<<endl;
    return 0;
}
