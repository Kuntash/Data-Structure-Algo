#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int temp = 0;
    int count = 0;
    for (int i = 1; ;i++)
    {
        sum = sum + i;
        temp = temp + sum;
        if (temp > n)
        {
            break;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}