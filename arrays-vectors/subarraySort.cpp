/*Given an array of size at least two, find the smallest subarray that needs to be sorted in place so that the entire input array becomes sorted. 
If the input array is already sorted, the function should return [-1, -1] otherwise return the start and the end of index of the smallest subarray */
// Input: [1,2,3,4,5,8,7,6,9,10,11]
// Output: [5,7]

//lets consider that the input has to be sorted in ascending order.
//(initial approach <wrong>): loop through the array and save start index and end index on
//(second approach <not efficient>): We can sort the array and compare the first changed and last changed index. Time complexity: O(nlogn) also a space complexity of O(n)

//(best approach <O(n)>): we find the smallest and the largest abnormalities, then find where the two element should be placed if sorted.
//condition
#include <iostream>
#include <vector>
#include <algorithm>
#define INT_MIN (-2147483647 - 1)
#define INT_MAX 2147483647

using namespace std;
bool outOfOrder(vector<int> arr, int index)
{
    int x = arr[index];
    if (index == 0)
    {
        return x > arr[1];
    }
    if (index == arr.size() - 1)
    {
        return x < arr[arr.size() - 2];
    }
    return x > arr[index + 1] || x < arr[index - 1];
}
vector<int> smallestSub(vector<int> arr)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    //Looping through the array to find the smallest and largest.
    for (int i = 0; i < arr.size(); i++)
    {
        if (outOfOrder(arr, i))
        {
            smallest = min(smallest, arr[i]);
            largest = max(largest, arr[i]);
        }
    }
    if (smallest == INT_MAX)
        return {-1, -1};
    //finding the correct indexes smallest and largest
    int left = 0;
    while (smallest >= arr[left])
    {
        left++;
    }
    int right = arr.size() - 1;
    while (largest <= arr[right])
    {
        right--;
    }
    return {left, right};
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 8, 7, 6, 9, 10, 11};
    auto Pair = smallestSub(arr);
    cout << "[" << Pair[0] << ", " << Pair[1] << "]" << endl;
    return 0;
}