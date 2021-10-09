#include<iostream>
#include<vector>
#define ll long long int
using namespace std;
ll Count(vector<ll> &sieve, ll i)
{
    ll sum = 0;
    ll n = sieve.size();
    for(ll i = 0; i<i; i++)
    {
        if(sieve[i] == 0)
        {
            sum++;
        }
    }
    return sum;
}

ll main()
{
    ll t;
    cin>>t;
    vector<ll> sieve(1000000 + 1, 1);
    sieve[0] = 0;
    sieve[1] = 1;
    for(ll i = 2; i <= 1000000; i++)
    {
        if(i * i <= 1000000)
        {
            for(ll j = i * i; j <= 1000000;j+= i)
            {
                sieve[j] = 0;
            }
        }
    }
    while(t--)
    {
        ll l, r, total = 0;
        cin>>l>>r;
        for(ll i = l; i <= r; i++)
        {
            ll sum = Count(sieve, i);
            if(sieve[sum] == 1)
                total++;
        }
        cout<<total<<endl;
    }
    return 0;
}