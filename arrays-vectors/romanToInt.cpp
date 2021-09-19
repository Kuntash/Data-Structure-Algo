//This program will convert roman number into integers.
//Insert all the value of roman literal into hashmap to retrieve it in O(1) time complexity;
//Then if the substr(i, 2) comes exists in the hashmap, add its value and increment 2
//times. Else add hashmap[substr(i, 1)]
#include <iostream>
#include <unordered_map>
using namespace std;
int romanToInt(string s)
{
    unordered_map<string, int> hashtable;
    hashtable["I"] = 1;
    hashtable["V"] = 5;
    hashtable["X"] = 10;
    hashtable["L"] = 50;
    hashtable["C"] = 100;
    hashtable["D"] = 500;
    hashtable["M"] = 1000;
    hashtable["IV"] = 4;
    hashtable["IX"] = 9;
    hashtable["XL"] = 40;
    hashtable["XC"] = 90;
    hashtable["CD"] = 400;
    hashtable["CM"] = 900;
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (hashtable.find(s.substr(i, 2)) != hashtable.end())
        {
            sum += hashtable[s.substr(i, 2)];
            i++;
        }
        else
        {
            sum += hashtable[s.substr(i, 1)];
        }
    }
    return sum;
}
int main()
{
    string s = "LVIII";
    cout << romanToInt(s) << endl;
    return 0;
}