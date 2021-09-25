#include <iostream>
using namespace std;

int main()
{
    int X;
    cin >> X;
    //base condition, if the score is expert level
    if (X >= 90)
        cout << "expert";
    else if (X >= 70)
        cout << 90 - X;
    else if (X >= 40)
        cout << 70 - X;
    else
        cout << 40 - X;
    return 0;
}