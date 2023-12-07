#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head,Node*&tail,int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head = newNode;
        tail=newNode;
    }
    else 
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void print_reverse(Node *head)
{
    Node *temp = head;
    if(temp==NULL) return;
    print_reverse(temp->next);
    cout<<temp->val<<" ";
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
  print_reverse(head);
    return 0;
}