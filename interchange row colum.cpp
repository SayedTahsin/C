//1. Write a program to interchange the row and column of a matrix.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int matrx[100][100],ans[100][100],r,c,temp;
    cin>>r>>c;
    for(int i=1; i<=r; i++)
        for(int j=1; j<=c; j++)
            cin>>matrx[i][j];

    swap(r,c);
    for(int i=1; i<=r; i++)
        for(int j=1; j<=c; j++)
        {
            ans[i][j]=matrx[j][i];
        }
    cout<<endl;
    for (int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
            cout<<ans[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}
/*
Sayed Tahsinoor Rahman
C191101
*/
