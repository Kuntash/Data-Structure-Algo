/*Given n non negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

Algorithm: first case: Rain water can be stored only if the arr[i] is smaller than arr[i-1] and arr[i + 1]; and the unit will be difference between min(arr[i-1], arr[i+1]) - arr[i];
 second case: if only one side i.e arr[i-1] or arr[i+1] is bigger, we than loop in the other direction to get a value that is bigger than arr[i]; and for each iteration we then

Approach 1: for each arr[i], we find the max left, and max right then subtract arr[i], so finding left and right max for each would take O(n) and the loop will take O(n) so the order of the program would be O(n^2)

Approach 2: instead we run two loops one after the other and save all the left max and right max in two arrays which will take O(n) or 2n time. then a for loop to traverse all the elements. This will reduce the time complexity to O(n) but will occupy O(n) space too.
Input : [0,1,0,2,1,0,1,3,2,1,2,1]
Output: units of rain i.e. 6
*/
#include <iostream>
#include <vector>
using namespace std;
//Finding total units of rain

int unitsOfRain(vector<int> arr)
{
    if (arr.size() <= 2)
    {
        return 0;
    }
    vector<int> leftArr(arr.size());
    vector<int> rightArr(arr.size());
    int rainSum = 0;
    leftArr[0] = arr[0];
    rightArr[arr.size() - 1] = arr[arr.size() - 1];
    for (int i = 1; i < arr.size(); i++) // Order of n
    {
        int Max = max(arr[i], leftArr[i - 1]);
        leftArr[i] = Max;
    }
    for (int i = arr.size() - 2; i >= 0; i--) // Order of n
    {
        int Max = max(arr[i], rightArr[i + 1]);
        rightArr[i] = Max;
    }
    for (int i = 0; i < arr.size(); i++) // Order of n
    {
        rainSum += min(leftArr[i], rightArr[i]) - arr[i];
    }
    return rainSum;
}
int main()
{
    vector<int> arr{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Output: " << unitsOfRain(arr) << endl;
    return 0;
}
