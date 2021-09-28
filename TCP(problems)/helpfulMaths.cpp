#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            arr.push_back(1);
        }
        else if (s[i] == '2')
        {
            arr.push_back(2);
        }
        else if (s[i] == '3')
        {
            arr.push_back(3);
        }
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++)
    {
        cout << arr[i] << "+";
    }
    cout << arr[arr.size() - 1];
    return 0;
}