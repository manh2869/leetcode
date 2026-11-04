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

ListNode *node(ListNode *head)
{
    ListNode *temp1 = head;

    ListNode *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    ListNode *t = temp->next;
    t->next = head;

    temp->next = nullptr;

    return t;
}
ListNode *rotateRight(ListNode *head, int k)
{
    ListNode *t = head;

    for (int i = 0; i < k; i++)
    {
        t = node(t);
    }
    return t;
}
//  use  k%n to reduce loop
int main()
{
    ListNode *head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5, new ListNode(6, nullptr))))));

    ListNode *temp = rotateRight(head, 2);
    while (temp != nullptr)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
    return 0;
}