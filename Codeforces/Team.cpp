#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int totalSolved = 0;
    while (n--)
    {
        vector<int> arr(3);
        int sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                sum++;
            }
        }
        if (sum >= 2)
        {
            totalSolved++;
        }
    }
    cout << totalSolved << endl;
    return 0;
}