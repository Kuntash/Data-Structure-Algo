#include <iostream>
using namespace std;
int d, x, y;
void extendedEuclidean(int a, int b)
{
    if (b == 0)
    {
        d = a;
        x = 1;
        y = 0;
    }
    else
    {
        extendedEuclidean(b, a % b);
        int temp = x;
        x = y;
        y = temp - ((a / b) * y);
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    extendedEuclidean(a, b);
    cout << "GCD: " << d << endl;
    cout << "Coefficients: x = " << x << "y = " << y << endl;
    return 0;
}