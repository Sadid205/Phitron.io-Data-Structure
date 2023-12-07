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
void insert_at_tail(Node *&head,Node *&tail,int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else 
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void descending_Sort(Node *head)
{
    for(Node*i=head;i->next!=NULL;i=i->next)
    {
        for(Node*j=i->next;j!=NULL;j=j->next)
        {
            if(i->val<j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}
void print_linked_list(Node*head)
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
  Node *head =NULL;
  Node *tail =NULL;
  int value;
  while (true)
  {
    cin>>value;
    if(value==-1) break;
    insert_at_tail(head,tail,value);
  }  
descending_Sort(head);
print_linked_list(head);
    return 0;
}