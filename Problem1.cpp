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
void insert_at_tail(Node*&head,int val)
{
    Node * newNode = new Node(val);
    Node *temp = head;
    if(head==NULL)
    {
        newNode->next = head;
        head = newNode;
    }
    else 
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        //ekhon temp last node e
        temp->next=newNode;
    }
}

void print_size_of_node(Node*head)
{
    Node *temp = head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    cout<<endl<<count<<endl<<endl;
}
int main ()
{
    Node*head = NULL;
  while(true)
  {
    int val;
    cin>>val;
    if(val==-1)break;
    insert_at_tail(head,val);
  }
  print_size_of_node(head);

    return 0;
}