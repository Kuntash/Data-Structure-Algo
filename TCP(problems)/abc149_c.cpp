#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

bool is_prime(double n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        int temp = n;
        if (temp % i == 0)
            return false;
    }
    return true;
}
int main()
{
    double n;
    cin >> n;
    bool not_done = true;
    while (not_done)
    {
        bool temp = is_prime(n);
        if (temp)
        {
            cout << n << endl;
            not_done = false;
        }
        else
        {
            n++;
        }
    }
    return 0;
}