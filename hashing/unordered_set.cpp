//This program will demonstrate workings of unordered set
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    //set is just a collections of keys
    unordered_set<int> s{1, 2, 3, 8, 11, 15, 0};
    int key;
    cin >> key;

    //insertion

    s.insert(111);
    //deletion

    s.erase(11);
    //searching for a key in unordered set
    if (s.find(key) != s.end())
    {
        cout << key << " is present" << endl;
    }
    else
    {
        cout << "Not found " << endl;
    }

    //Printing all the element of the unordered set
    for (auto x : s)
    {
        cout << x << " " << endl;
    }
    return 0;
}