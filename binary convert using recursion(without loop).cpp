#include<bits/stdc++.h>
using namespace std;
void bin(int n)
{
    if(n==0)
    {
        cout<<0;
        return ;
    }
    if(n==1)
        cout<<1;
    else
    {
        bin(n/2);
        cout<<n%2;
    }
}
int main()
{
    int x;
    cin>>x;
    bin(x);
    return 0;
}

