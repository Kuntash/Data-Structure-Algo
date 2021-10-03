#include <iostream>
#include <math.h>
using namespace std;

bool is_prime(double no)
{
    for (int i = 2; i <= sqrt(no); i++)
    {
        int temp = no;
        if (temp % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool canDo = false;
        for (int i = 2; i <= n - 2; i++)
        {
            int partner = n - i;
            if (is_prime(i) && is_prime(partner))
            {
                canDo = true;
                break;
            }
        }
        if (canDo)
            cout << "Deepa" << endl;
        else
            cout << "Arjit" << endl;
    }
    return 0;
}