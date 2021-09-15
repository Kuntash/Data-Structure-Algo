//A band is defined as the subsequence of an array which can be reordered in such a way that all elements appear consecutive
//A longest band is the band which contains the maximum integers.

// Approach 1: Using sort() function and a for loop we can accomplish the task in O(nlogn) time
// Approach 2: A better approach would be to use set data structure and one for loop
//Which will reduce the time complexity to O(n).
//Input : [1,9,3,0,18,5,2,4,10,7,12,6]
//Sorted : [0,1,2,3,4,5,6,7,9,10,12,18]
//output: 8

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
int largestBand(vector<int> arr)
{
    unordered_set<int> s;
    //copy the content of the vector in unordered set O(n);
    for (auto x : arr)
    {
        s.insert(x);
    }
    int lBand = 0;
    //Iterate through the vector
    for (int i = 0; i < arr.size(); i++)
    {
        // Find if the element is the starting point
        if (s.find(arr[i] - 1) == s.end())
        {
            int count = 1;
            int nextNo = arr[i] + 1;
            while (s.find(nextNo) != s.end())
            {
                count++;
                nextNo++;
            }
            lBand = max(lBand, count);
        }
    }
    return lBand;
}
int main()
{
    vector<int> arr{1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};
    cout << "Output: " << largestBand(arr) << endl;
    return 0;
}