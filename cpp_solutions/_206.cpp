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
ListNode *reverseList(ListNode *head)
{
    ListNode *temp = head;
    stack<int> st;
    while (temp)
    {
        st.push(temp->val);
        temp = temp->next;
    }
    temp = head;
    while (temp)
    {
        temp->val = st.top();
        temp = temp->next;
        st.pop();
    }
    return head;
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode *newHead = reverseList(head);
    while (newHead)
    {
        cout << newHead->val << " ";
        newHead = newHead->next;
    }
}