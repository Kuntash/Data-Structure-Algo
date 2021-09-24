#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findMinSwap(vector<int> &arr)
{
    int n = arr.size();
    int ans = 0;
    pair<int, int> mp[n];

    //Copy all the values and corresponding indexes into the array of pair<int, int>
    for (int i = 0; i < arr.size(); i++)
    {
        mp[i].first = arr[i];
        mp[i].second = i;
    }

    //Sort the array of pair using sort inbuilt function O(NlogN).
    sort(mp, mp + n);

    //Make an array of bool to store whether a particular node is visited or not
    vector<bool> visited(n, false);
    //Jump through the nodes and find the number of swaps in each required cycle

    for (int i = 0; i < n; i++)
    {
        int node = i;
        int cycle = 0;
        // If a particular node is visited or is placed at the correct answer
        if (visited[node] == true || arr[node] == mp[node].first)
        {
            continue;
        }
        while (visited[node] == false)
        {
            visited[node] = true;
            node = mp[node].second;
            cycle++;
        }
        ans += (cycle - 1);
    }
    return ans;
}
int main()
{ //1,2,3,4,5
    //4,3,2,1,0
    vector<int> arr{2, 4, 5, 1, 3};
    cout << findMinSwap(arr) << endl;
    return 0;
}