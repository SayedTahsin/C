#include<bits/stdc++.h>
using namespace std;
void seive_prime(int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int p=2; p<=sqrt(n); p++)
    {
        if(prime[p]==true)
        {
            for(int i=p*p; i<=n; i+=p)
            {
                prime[i]=false;
            }
        }
    }
    cout<<"following are the prime before "<<n<<": ";
    for(int p=2; p<=n; p++)
    {
        if(prime[p])
            cout<<p<<' ';
    }
}
int main()
{
    int n;
    cin>>n;
    seive_prime(n);
    return 0;
}
