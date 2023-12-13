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
void insert_at_tail(Node *&head,Node *&tail,int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head=newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void reverse_doubly(Node *head,Node*tail)
{
    Node *i = head;
    Node *j = tail;
    while(i!=j && i->next!=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->prev;
    }
    swap(i->val,j->val);
}
void print_doubly(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
int main ()
{
  Node *head = NULL;
  Node *tail = NULL;
  int value;
  while(true)
  {
    cin>>value;
    if(value==-1) break;
    insert_at_tail(head,tail,value); 
  }
  reverse_doubly(head,tail);
    print_doubly(head);
    return 0;
}