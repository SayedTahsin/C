//5.	Write a program to check if a Matrix is a Sparse Matrix.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100][100],m,n,count=0;
    cin>>m>>n;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==0)
                count++;
        }
    }
    if(count>(m*n)/2)
        cout<<"Spurse\n";
    else
        cout<<"Not Spurse\n";
    return 0;
}
