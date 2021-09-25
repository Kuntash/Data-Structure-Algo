#include <iostream>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;
    int MIN = min(S.length(), T.length());
    for (int i = 0; i < MIN; i++)
    {
        if (S[i] < T[i])
        {
            cout << "Yes";
            return 0;
        }
        else if (S[i] > T[i])
        {
            cout << "No";
            return 0;
        }
    }
    if (S.length() < T.length())
    {
        cout << "Yes";
    }
    else if (S.length() > T.length())
    {
        cout << "No";
    }
    return 0;
}