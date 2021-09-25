#include <iostream>
using namespace std;

bool isComposite(int i, int j)
{
    int countI = 0;
    int countJ = 0;
    for (int k = 1; k <= i; k++)
    {
        if (i % k == 0)
            countI++;
        if (j % k == 0)
            countJ++;
    }
    return countI > 2 && countJ > 2;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        for (int j = 2; j < n; j++)
        {
            if (i + j == n && isComposite(i, j))
            {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    return 0;
}