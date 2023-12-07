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
void print_the_maximum(Node *head)
{
    int max = INT_MIN;
    Node *temp = head;
    while(temp!=NULL)
    {
      
        if(temp->val>max)
        {
            max=temp->val;
        }
          temp = temp->next;
    }
    cout<<max<<endl;
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
  print_the_maximum(head);

    return 0;
}