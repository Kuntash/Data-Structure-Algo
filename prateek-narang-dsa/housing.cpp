#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

//Challenge 1: Find the smallest window also
//Challenge 2: What if the values contain negative numbers also. 
void printHousing(vector<int> plots, int k)
{
    int n = plots.size();
    int i = 0; 
    int j = 0;
    int curSum = 0;
    int minWindow = INT_MAX;
    while(j < n)
    {
        //expand to right
        curSum += plots[j];
        j++;

        //While the sum is > k, and i < j, subtract the left most window
        while(curSum > k && i < j)
        {
            curSum -= plots[i];
            i++;
        }

        //If the Sum equals k at any given point, print it.
        if(curSum == k)
        {
            cout<<i<<" - "<<j-1<<endl;
            int temp = j - i;
            if(temp < minWindow)
            {
                minWindow = temp;
            }
        }
    }
    cout<<"Smallest Window: "<<minWindow<<endl;
}
int main()
{
    vector<int> plots = {1,3,2,1,4,1,3,2,1,1,2};
    int k = 8;
    printHousing(plots, 8);
    return 0;
}