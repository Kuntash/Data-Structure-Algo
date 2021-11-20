#include<iostream>
#include<unordered_map>
using namespace std;

void printLargestUniqueString(string input)
{
    int n = input.length();
    unordered_map<char, int> table;
    int i = 0;
    int j = 0;
    int windowLen = 0;
    int maxWindow = 0;
    int startWindow = 0;
    while(j < n)
    {
        char ch = input[j];

        //If it is inside hashmap and the index is greater and the start of the window
        if(table.count(ch) && table[ch] >= i)
        {
            //start a new window with index greater than table[ch]
            i = table[ch] + 1;
            windowLen = j - i;
            //updated remaining window length exluding the current character
        }

        //update the last occurence
        table[ch] = j;
        windowLen++;
        j++;

        //update maxWindow length at every step
        if(windowLen > maxWindow)
        {
            maxWindow = windowLen;
            startWindow = i;
        } 
    }
    cout<<"Longest Unique Substring length: "<<maxWindow<<endl;
    cout<<"String: ";
    for(int i = 0; i < maxWindow; i++)
    {
        cout<<input[i + startWindow];
    }
}
int main()
{
    string input;
    cin>>input;
    printLargestUniqueString(input);
    return 0;
}