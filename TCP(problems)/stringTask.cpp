#include <iostream>
#include <unordered_set>
#include <ctype.h>
using namespace std;

int main()
{
    //Vowel's map
    unordered_set<char> vowels{'a', 'e', 'i', 'o', 'y', 'u', 'A', 'E', 'I', 'O', 'U', 'Y'};

    string s;
    cin >> s;
    string newS = "";
    for (int i = 0; i < s.length(); i++)
    {
        char temp = tolower(s[i]);
        if (vowels.find(s[i]) == vowels.end())
        {
            newS = newS + "." + temp;
        }
    }
    cout << newS << endl;
    return 0;
}