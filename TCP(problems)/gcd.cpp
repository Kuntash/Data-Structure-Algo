//I will be using euclid's algorithm for time complexity: O(log(max(a, b)))
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
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}