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
        int max = 0;
        for (int i = 1; i <= n; i++)
        {
            if (2 * i > n)
            {
                break;
            }
            if (2 * i <= n && i > max)
            {
                max = i;
            }
        }
        cout << max << endl;
    }
    return 0;
}