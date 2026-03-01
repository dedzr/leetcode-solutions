#include <bits/stdc++.h>

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
    ListNode *deleteDuplicates(ListNode *head)
    {

        if (!head)
            return nullptr;

        std::unordered_set<int> seen;

        auto dummy = new ListNode(0);

        auto temp = dummy;

        while (head)
        {
            if (seen.find(head->val) == seen.end())
            {
                seen.insert(head->val);
                temp->next = new ListNode(head->val);

                temp = temp->next;
            }

            head = head->next;
        }

        return dummy->next;
    }
};