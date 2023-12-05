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
void insert_value(Node *&head,int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    else 
    {
        Node *temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
void insert_value_on_position(Node *&head,int poss,int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    if(poss==0)
    {
        newNode->next = head;
        head = newNode;
    }
    else 
    {
        temp = head;
        for(int i=1;i<=poss-1;i++)
        {
            temp= temp->next;
            if(temp==NULL)
            {
                cout<<"Invalid"<<endl;
                return;
            }
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    print_linked_list(head);
    cout<<endl;
   
}
int main ()
{
  Node * head = NULL;
  while(true)
  {
    int value;
    cin>>value;
    if(value==-1) break;
    insert_value(head,value);
  }
  int Q;
  cin>>Q;
  for(int i=0;i<Q;i++)
  {
    int poss,value;
    cin>>poss>>value;
    insert_value_on_position(head,poss,value);
  }


    return 0;
}