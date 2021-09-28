#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]] = mp[arr[i]] + 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] == 1)
                cout << i + 1 << endl;
        }
    }
    return 0;
}