#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll int fib(ll int n)
{

    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    return fib(n-1)+fib(n-2);
}
int main()
{
    ll int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}
