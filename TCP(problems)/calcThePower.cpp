#include <iostream>

#define ll long long int
using namespace std;
long long int mod = 1000000007;
ll calcPower(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b % 2 == 0)
        return calcPower((a * a) % mod, b / 2);
    else
        return (a * calcPower((a * a) % mod, b / 2)) % mod;
}
int main()
{
    ll a, b;
    cin >> a >> b;
    cout << calcPower(a, b) << endl;
    return 0;
}