#include <iostream>
using namespace std;

int main()
{
    string aim = "Hello,World!";
    string S;
    cin >> S;
    if (S.length() != aim.length())
    {
        cout << "WA";
        return 0;
    }
    for (int i = 0; i < aim.length(); i++)
    {
        if (S[i] != aim[i])
        {
            cout << "WA";
            return 0;
        }
    }
    cout << "AC";
    return 0;
}