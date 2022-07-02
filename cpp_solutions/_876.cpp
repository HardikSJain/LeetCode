#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *middleNode(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode *middleNode1(ListNode *head)
{
    int size = 0;
    ListNode *temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    ListNode *mid = head;
    int half = size / 2;
    while (half--)
    {
        mid = mid->next;
    }
    return mid;
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    ListNode *mid = middleNode(head);
    cout << mid->val << endl;
    return 0;
}
