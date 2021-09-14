//Same as the pairSum problem, but here I will be using vector and arrays instead of
//Hashtables.

//Input [10, 5, 2, 3, -6, 9, 11]
//S = 4
//Output = [10, -6] Let us assume that there will only be one pair

//Approach 1: brute force:- time complexity O(n^2)
//Approach 2: sort and do binary search. (NlogN + logN) = O(NlogN)
//Approach 3: Using Data Structure: set
/* Advantage of set: the lookup time in set is O(1) instead of O(n).
NOTE: if we put all the elements in the set from the start then repetition of pairs can occur which isn't required, therefore we will put elements in the set on the go while looping through the arrays
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> Pair(vector<int> arr, int Sum)
{
    unordered_set<int> S;
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        int remainder = Sum - arr[i];
        if (S.find(remainder) != S.end()) // If the set contains the element
        {
            result.push_back(arr[i]);
            result.push_back(remainder);
        }
        S.insert(arr[i]); // After each iteration, insert the array element in the set
    }
    return result;
}
int main()
{
    vector<int> arr{10, 5, 2, 3, -6, 9, 11};
    int sum = 4;
    auto result = Pair(arr, sum);
    if (result.size() == 0)
    {
        cout << "No such pair" << endl;
    }
    else
    {
        cout << "{" << result[0] << ", " << result[1] << "}" << endl;
    }
    return 0;
}
