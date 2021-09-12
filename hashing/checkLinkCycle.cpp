#include <iostream>
#include <unordered_map>
using namespace std;
//Write a program to check if linked list contains a cycle
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

//Using hash table I think the table should be unordered_map<node *, bool>
/* we cannot use data as a key since a there can be duplicate
The brute force approach would be if two node points to same next, then that linked list is a cycle */

// Start of the program
void insertAtHead(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    //otherwise
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
bool containsCycle(node *&head)
{
    // main logic here
    unordered_map<node *, bool> hashtable;
    node *temp = head;
    while (temp != NULL)
    {
        //Check if the node is already in the hashtable
        if (hashtable.count(temp) != 0)
        {
            return true;
        }
        //otherwise mark the value as true;
        hashtable[temp] = true;
    }
    return false;
}
void displayLinkedList(node *&a)
{
    node *temp = a;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}
int main()
{
    node *a = NULL;
    insertAtHead(a, 1);
    insertAtHead(a, 2);
    insertAtHead(a, 3);
    insertAtHead(a, 4);
    insertAtHead(a, 5);
    cout << &a->data << endl;
    cout << &a << " " << a << endl;
    node *temp = a->next->next->next->next;
    temp->next = a->next->next;
    if (containsCycle(a))
    {
        cout << "This linked list contains a cycle" << endl;
    }

    return 0;
}
