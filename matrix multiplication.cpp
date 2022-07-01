//4.	 Write a program to calculate the multiplication of two matrices.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100],b[100][100],r1,r2,c1,c2,ans[100][100]= {0};
    cout<<"first Matrix: ";
    cin>>r1>>c1;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"second Matrix: ";
    cin>>r2>>c2;
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cin>>b[i][j];
        }
    }
    if(c1!=r2)
    {
        cout<<"Not possible!!!\n";
        return 0;
    }
    for(int i=0; i<r1; i++)
    {
        for(int k=0; k<r1; k++)
        {
            for(int j=0; j<c1; j++)
            {
                ans[i][k]+=a[i][j]*b[j][k];
            }
        }
    }
    cout<<"After Multiplication: \n";
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cout<<ans[i][j]<<' ';
        }
        cout<<endl;
    }
}
/*C191101
Sayed Tahsinoor Rahman
