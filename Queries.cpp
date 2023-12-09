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
void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    if (head == NULL)
    {
        head = newNode;
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
void delete_Vth_poss(Node *&head, int poss)
{
    Node *temp = head;
    if(head==NULL) return;
    if (poss == 0)
    {
        Node *delete_head = head;
        head = temp->next;
        delete delete_head;
    }
    else
    {
        for (int i = 1; i <= poss - 1; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                return;
            }
        }
        if (temp->next == NULL)
        {

            return;
        }
        Node *delete_node = temp->next;
        temp->next = temp->next->next;
        delete delete_node;
    }
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;
        if (X == 0)
        {
            insert_at_head(head, V);
           
            print_linked_list(head);
        }
        else if (X == 1)
        {
            insert_at_tail(head, V);
         
            print_linked_list(head);
        }
        else if (X == 2)
        {
            delete_Vth_poss(head, V);
        
            print_linked_list(head);
        }
    }

    return 0;
}