//In a vector array of strings, find the longest common prefix and output it, otherwise
//Output: ""
//Approach: take zeroth element, and compare its first index char to with every word,
//to see if its the same, if it is, then jump to the next, but at any point if the
//char doesn't match then return and output the string.
#include <iostream>
#include <vector>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    string s = strs[0];
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        for (auto x : strs)
        {
            if (s[i] != x[i])
            {
                return ans;
            }
        }
        ans += s[i];
    }
    return ans;
}
int main()
{
    vector<string> arr{"flower", "flow", "flight"};
    cout << longestCommonPrefix(arr) << endl;

    return 0;
}