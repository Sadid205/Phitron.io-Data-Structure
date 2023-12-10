#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int val;
    Node* next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_normal(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->val <<" ";
       temp = temp->next;
    }
    cout<<endl;
}
void print_reverse(Node *tail)
{
   
    Node *temp = tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
}

int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void delete_at_position(Node *head,int poss)
{
    Node *temp = head;
    for(int i=1;i<=poss-1;i++)
    {
        temp = temp->next;
    }
    Node *delete_Node = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete delete_Node;
}
void delete_tail(Node *&tail)
{
    Node *delete_tail = tail;
    tail = tail->prev;
    delete delete_tail;
    tail->next = NULL;
}
void delete_head(Node *&head)
{
    Node * delete_head = head;
    head = head->next;
    delete delete_head;
    head->prev = NULL;

}
int main ()
{
    // Node *head =NULL;
    // Node *tail = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;
    
    //connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    
    // int pos;
    // cin>>pos;

    // delete_at_position(head,pos);
    // delete_tail(tail);
    delete_head(head);
    print_normal(head);
    print_reverse(tail);
    return 0;
}