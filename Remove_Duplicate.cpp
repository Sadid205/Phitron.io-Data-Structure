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
    Node*newNode = new Node(value);
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

void print_linked_list(Node *head)
{
    Node*temp = head;
   while(temp!=NULL)
   {
    cout<<temp->val<<" ";
    temp = temp->next;
   }
}
void delete_node(Node *head,int value)
{
  Node *temp = head;
  while(temp->next!=NULL)
  {
    if(temp->next->val==value)
    {
      Node *delete_node = temp->next;
      temp->next = temp->next->next;
      delete delete_node;
    }
    else 
    {
      temp = temp->next;
    }
  }
}
void check_duplicate_and_delete(Node *head)
{
  Node *temp = head;
  while(temp!=NULL)
  {
    delete_node(temp,temp->val);
    temp=temp->next;
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
  check_duplicate_and_delete(head);
  print_linked_list(head);
    return 0;
}