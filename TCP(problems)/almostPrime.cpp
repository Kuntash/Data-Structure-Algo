#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
bool almostPrime(ll i, vector<bool> arr, ll n)
{
    ll count = 0;
    for (ll j = 2; j < i; j++)
    {
        if (i % j == 0 && arr[j])
            count++;
    }
    if (count == 2)
        return true;
    else
        return false;
}
int main()
{
    ll n;
    cin >> n;
    vector<bool> arr(n + 1, true);
    arr[0] = false;
    arr[1] = false;
    for (ll i = 2; i <= n; i++)
    {
        if (!(i * i > n))
        {
            for (ll j = i * i; j <= n; j += i)
                arr[j] = false;
        }
    }
    int count = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (almostPrime(i, arr, n))
            count++;
    }
    cout << count << endl;
    return 0;
}