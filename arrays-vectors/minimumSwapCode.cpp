#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int countMinSwaps(vector<int> arr)
{
    int ans = 0;
    int n = arr.size();
    // Know the actual position of elements (sorting)
    pair<int, int> ap[n];
    for (int i = 0; i < n; i++)
    {
        ap[i].first = arr[i];
        ap[i].second = i;
    }
    sort(ap, ap + n);
    //if element is visited or in the right position
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        int oldPosition = ap[i].second;
        if (visited[i] || oldPosition == i)
        {
            continue;
        }

        int node = i;
        int cycle = 0;
        while (!visited[node])
        {
            visited[node] = true;
            int next_node = ap[node].second;
            node = next_node;
            cycle++;
        }
        ans += (cycle - 1);
    }
    return ans;
}
int main()
{
    vector<int> arr{5, 4, 3, 2, 1};
    cout << countMinSwaps(arr) << endl;
    return 0;
}