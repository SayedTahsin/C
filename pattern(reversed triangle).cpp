#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,i,j,space;
    cout<<"row: ";
    cin>>row;
    for(int i=row; i>=1; i--)
    {
        for(space=0; space<row-1; ++space)
            cout<<" ";
        for(j=i; j<=2*i-1; ++j)
            cout<<"*";
        for(j=0; j<i-1; ++j)
            cout<<"*";
        cout<<endl;
    }
}
