#include<iostream>
#include<vector>
#include<unordered_map>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    if(n == 1)
    {
        cout<<1<<endl;
        cout<<1<<endl;
        return 0;
    }
    vector<bool> isPrime(n+2, 1);
    isPrime[0] = 0;
    isPrime[1] = 0;
    for(ll i = 2; i<= n+1; i++)
    {
        if(i * i <= n+1)
        {
            for(ll j = i * i; j <= n + 1; j+= i)
                isPrime[j] = 0;
        }
    }
    vector<int> colors(n + 2, 0);
    bool haveComp = false;
    for(ll i = 2; i<= n + 1; i++)
    {
        if(isPrime[i])
        {
            colors[i] = 1;
        }
        else
        {
            haveComp = true;
            colors[i] = 2;
        }
    }
    if(haveComp)
        cout<<2<<endl;
    else
        cout<<1<<endl;
    for(ll i = 2; i<= n+ 1; i++)
    {
        cout<<colors[i]<<" ";
    }

    return 0;
}