///Write a program to find the highest mountain and the elements in that mountain
// Peak: Arr[i] is a peak if Arr[i-1] and Arr[i+1] both are less than Arr[i];
//Approach 1: we can solve the problem in O(n) time complexity.
//First loop through the array, and at every peak, measure the length of left side and right side

#include <iostream>
#include <vector>
using namespace std;

int highestMountain(vector<int> arr)
{
    int largest = 0;
    for (int i = 1; i < arr.size() - 1;)
    {

        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            int count = 1;
            int j = i;
            //Counting backward along the mountain path
            while (j >= 1 && arr[j] > arr[j - 1])
            {
                count++;
                j--;
            }

            //Counting forward along the mountain path
            while (i < arr.size() - 1 && arr[i] > arr[i + 1])
            {
                count++;
                i++;
            }
            largest = max(largest, count);
        }
        else
        {
            i++;
        }
    }
    return largest;
}
int main()
{
    vector<int> arr{5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};
    cout << highestMountain(arr) << endl;
    return 0;
}