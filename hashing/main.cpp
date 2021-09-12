//unordered_map is the header file for hash table in C++
//hash table is better than arrays of pair for data retrieval
#include <iostream>
#include <unordered_map>
#include <map>
#include <list> // or <map> which will sort the keys in lexicographical order
using namespace std;
int main()
{
    unordered_map<string, int> menu;
    //Inserting data into a hash table
    menu["maggi"] = 15;
    menu["colddrink"] = 20;
    menu["dosa"] = 99;
    menu["maggi"] = 15;
    menu["pizza"] = 499;
    menu["indianplatter"] = 399;

    menu["dosa"] = (1 + 0.1) * menu["dosa"];

    //Deletion of item using erase method
    menu.erase("dosa");
    //Searching for inside a collection of key value pairs(as hash table)
    string item;
    cin >> item;
    if (menu.count(item))
    {
        cout << item << " is available and the cost is " << menu[item] << endl;
    }
    else
    {
        cout << item << " is not available" << endl;
    }
    //Iterating over an unordered_map
    for (auto item : menu)
    {
        cout << item.first << " - " << item.second << endl;
    }
    cout << endl;

    //Phone book with one key and multiple value
    map<string, list<string>> phonebook;
    phonebook["Prateek"].push_back("1111111");
    phonebook["Prateek"].push_back("1111112");
    phonebook["Prateek"].push_back("1111113");

    phonebook["Krishna"].push_back("22223");
    phonebook["Krishna"].push_back("22224");
    phonebook["Krishna"].push_back("22225");

    //Displaying the value
    for (pair<string, list<string>> person : phonebook)
    {
        cout << person.first << endl;
        for (string phoneNo : person.second)
        {
            cout << phoneNo << ", ";
        }
        cout << endl;
    }

    return 0;
}