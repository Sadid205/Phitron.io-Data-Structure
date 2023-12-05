#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_element_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    if (head == NULL)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void print_the_middle_element(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    int middle = count / 2;
    temp=head;
    for (int i = 0; i < middle - 1; i++)
    {
        temp = temp->next;
    }
    if (count % 2 == 0)
    {
        cout << temp->val << " " << temp->next->val;
    }
    else
    {
        cout << temp->val;
    }
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
            break;
        insert_element_at_tail(head, value);
    }
    print_the_middle_element(head);

    return 0;
}