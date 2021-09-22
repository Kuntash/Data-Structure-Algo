#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    //minimum with of the road
    int sum = 0;

    //loop through the vector and if the height of the person is more than h, then add 2
    // else add 1
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > h)
        {
            sum += 2;
        }
        else
        {
            sum++;
        }
    }
    cout << sum << endl;

    return 0;
}