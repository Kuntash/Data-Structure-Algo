//Print pairs whose sum is equal to k

//Approaches
/*
1. Using two for loops O(n^2) 
2. Using one loop and an unordered_set
3. Two pointer approach (sorting + two pointer approach) - O(nlogn) or use binary search
that will also take the same time complexity.
*/

//The problem with this code is that I will get repeating pairs.
//Therefore to tackle this, we will do hashing on the go.
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<pair<int, int>> pairSum(vector<int> arr, int sum)
{
    //Logic
    unordered_set<int> s;
    vector<pair<int, int>> result;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = sum - arr[i];
        if (s.find(x) != s.end()) // If the pair is present in the unordered_set
        {
            pair<int, int> P;
            P.first = x;
            P.second = arr[i];
            result.push_back(P);
        }
        s.insert(arr[i]);
    }
    return result;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 10;
    auto result = pairSum(arr, sum);
    if (result.size() == 0)
    {
        cout << "No pairs found" << endl;
    }
    else
    {
        for (auto x : result)
        {
            cout << x.first << " - " << x.second << endl;
        }
    }
    return 0;
}