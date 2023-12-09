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
        tail  = newNode;
        return;
    }
    else 
    {
        tail->next = newNode;
        tail = newNode;
    }
}
int print_position(Node *head,int value)
{
    Node *temp = head;
    int count = -1;
    while(temp!=NULL)
    {
        count++;
        if(temp->val==value)
        {
            return count;
        }
        temp = temp->next;
    }
    count = -1;
    return count;
}
int main ()
{
 
  int T;
  cin>>T;
  for(int i=0;i<T;i++)
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
    int X;
    cin>>X;
    int count = print_position(head,X);
    cout<<count<<endl;
  }

    return 0;
}