#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    gcd(b % a, a);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int A, B;
        cin >> A >> B;
        long long int GCD = gcd(A, B);
        long long int LCM = (A * B) / GCD;
        cout << GCD << " " << LCM << endl;
    }
    return 0;
}