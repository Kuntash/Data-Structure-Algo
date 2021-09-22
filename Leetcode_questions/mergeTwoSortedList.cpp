#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *l3 = new ListNode();
        while (l1 && l2)
        {
            ListNode *temp = new ListNode();
            if (l1->val <= l2->val)
            {
                temp->val = l1->val;
                temp->next = nullptr;
                l1 = l1->next;
                l3->next = temp;
            }
            else
            {
                temp->val = l2->val;
                temp->next = nullptr;
                l2 = l2->next;
                l3->next = temp;
            }
        }
        if (l1)
        {
            l3->next = l1;
        }
        if (l2)
        {
            l3->next = l2;
        }
        return l3->next;
    }
};