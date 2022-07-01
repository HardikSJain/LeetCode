#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void deleteNode(ListNode *node)
{
    if (node->next == NULL)
    {
        delete node;
    }
    swap(node->val, node->next->val);
    // ListNode *temp = node->next;
    node->next = node->next->next;
    // not actually deleting the node improves the space complexity lmao irony
    // delete temp;
}

int main()
{
    ListNode *head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);
    deleteNode(head->next);

    ListNode *cur = head;
    while (cur)
    {
        cout << cur->val << " ";
        cur = cur->next;
    }
    return 0;
}