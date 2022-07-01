//3.	Write a program to calculate the rowsum and columnsum of a matrix.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r[100]= {0},c[100]= {0},arr[100][100],row,col;
    cin>>row>>col;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
            r[i]+=arr[i][j];
            c[j]+=arr[i][j];
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<' ';
        }
        cout<<"row Sum: "<<r[i]<<endl;;
    }
    cout<<"cloum Sum: \n";
    for(int i=0; i<col; i++)
        cout<<c[i]<<' ';
    cout<<endl;
    return 0;
}
/*C191101
Sayed Tahsinoor Rahman
*/
