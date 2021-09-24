// we need to print 1 to n, but value and index shouldn't be same
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            for (int i = n; i > 0; i--)
            {
                cout << i << " ";
            }
        }
        else
        {
            int mid = (n + 1) / 2;
            cout << mid << " ";
            for (int i = n - 1; i > 0; i--)
            {
                if (i == mid)
                {
                    cout << n << " ";
                }
                else
                {
                    cout << i << " ";
                }
            }
        }
    }

    return 0;
}