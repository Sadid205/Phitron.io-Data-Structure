#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
int size_of_list(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}
void print_normal(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout<<endl;
}
void print_reverse(Node *tail)
{
    if (tail == NULL)
    {
        return;
    }
    Node *temp = tail;
    while (temp !=NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout<<endl;
}
void insert_at_position(Node *&head, Node *&tail, int poss, int value)
{
    Node *newNode = new Node(value);
    if (poss == 0)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
             print_normal(head);
             print_reverse(tail);
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        print_normal(head);
        print_reverse(tail);
    }
    else if (poss > size_of_list(head))
    {
        cout << "Invalid" << endl;
    }
    else if (poss == size_of_list(head))
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        print_normal(head);
        print_reverse(tail);
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i <= poss - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
        print_normal(head);
        print_reverse(tail);
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;
        insert_at_position(head, tail, X, V);
    }
    return 0;
}