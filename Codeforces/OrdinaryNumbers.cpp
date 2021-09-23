#include <iostream>
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void sample()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
const long long int mod=1000000007;


int main()
{
    fast();
    sample();
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int total = 0;
        for (int i = 1; i <= 9; i++)
        {
            for (long long int j = 1; j <= n; j = j * 10 + 1)
            {
                long long int num = i * j;
                if (num <= n)
                {
                    total++;
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}