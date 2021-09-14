/*Given an array containing N integers and a target Sum, Find all distince integers that can add up to form target sum. The number in each triplets should be ordered in ascending order, and triplets should be ordered too.
Return empty array if no triplets exists.
*/

//Input = [1,2,3,4,5,6,7,8,9,15]
//Target = 18
//Output =
/*
[
 [1,2,15],
 [3,7,8],
 [4,6,8],
 [5,6,7]
]
*/

//Approach 1: brute force -  a big no since the time complexity will become O(n^3)
//Approach 2: traverse the array and for each item do pair sum for with target = Target - item     TIME COMPLEXITY: O(n^2)
//Approach 3: Two pointer approach : sorting(NlogN) + pointers(N)

/* Note:- both approach 2 and 3 have same time complexities but the advantage with 3rd one is that O(n) of space is not required while in 2nd approach O(n) of space if required for set */

#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> findTriplets(vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;
    for (int i = 0; i < arr.size() - 3; i++)
    {
        int j = i + 1;
        int k = arr.size() - 1;
        while (j < k)
        {
            int currentSum = arr[i] + arr[j] + arr[k];
            if (currentSum == target)
            {
                result.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
            }
            else if (currentSum > target)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    return result;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int target = 18;
    auto triplets = findTriplets(arr, target);
    for (auto triplet : triplets)
    {
        cout << "{" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "}" << endl;
    }
    return 0;
}