/* Given a string s containing just the characters '(', ')', '{', '}' and '[', ']',
determine if the input string is valid */

//Approach : we will use the concept of stack
//If the first char is a closing bracket.
//If when the stack is empty the next char is a closing bracket.

#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;
bool isValid(string s)
{
    //If the length of the string is one, then return false.
    unordered_map<char, char> mp;
    mp[')'] = '(';
    mp[']'] = '[';
    mp['}'] = '{';
    stack<char> Stack;
    //Check parenthese matching for all the value of string.
    for (int i = 0; i < s.size(); i++)
    {
        if (Stack.empty() || s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            Stack.push(s[i]);
        }
        else
        {
            if (mp[s[i]] == Stack.top())
            {
                Stack.pop();
            }
            else
            {
                Stack.push(s[i]);
            }
        }
    }
    //Check if the stack is empty after all the operations
    if (!Stack.empty())
    {
        return false;
    }
    return true;
}
int main()
{
    string s = "(){}[]";
    cout << isValid(s) << endl;
    return 0;
}