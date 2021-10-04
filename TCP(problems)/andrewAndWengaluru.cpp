#include <iostream>
#include <vector>
using namespace std;

long long int mod = 1000000007;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> arr(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<long long int> leftMax(n), rightMax(n);
        leftMax[0] = arr[0];
        rightMax[n - 1] = arr[n - 1];
        for (long long int i = 1; i < n; i++)
        {
            leftMax[i] = max(arr[i], leftMax[i - 1]);
        }
        for (long long int i = n - 2; i >= 0; i--)
        {
            rightMax[i] = max(arr[i], rightMax[i + 1]);
        }
        long long int sum = 0;
        for (long long int i = 1; i < n - 1; i++)
        {
            sum = sum + (min(leftMax[i], rightMax[i]) - arr[i]);
        }
        cout << sum % mod << endl;
    }
    return 0;
}