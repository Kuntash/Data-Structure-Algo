//The exponentiation in programming is called modular because sometimes, when the number
//exceeds the max value of the data types, we apply the modulo operation to accomodate the
//Number
#include <iostream>
using namespace std;
int recursivePower(int n, int k, int m)
{
    if (k == 0)
        return 1;
    if (k % 2 == 0) // IF the number is even
        return recursivePower((n * n) % m, k / 2, m);
    else
        return (n * recursivePower((n * n) % m, k / 2, m)) % m;
}
int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    cout << recursivePower(n, k, m) << endl;
    return 0;
}