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
void inserted_at_tail(Node*&head,int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    if(head==NULL)
    {
        newNode->next=head;
        head=newNode;
        return;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next = newNode;
    }
}
void count_duplicate(Node *head)
{
    Node *temp = head;
    int Frequent[100]={0};
    while(temp!=NULL)
    {
        int value = temp->val;
        Frequent[value-1]++;
        temp = temp->next;
    }
    bool flag = false;
    for(int i=0;i<100;i++)
    {
        if(Frequent[i]>0)
        {
            if(Frequent[i]>1)
            {
                flag=true;
            }
        }
    }
    if(flag==true)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
}
int main ()
{
  Node *head = NULL;
  while(true)
  {
    int value;
    cin>>value;
    if(value==-1)break;
    inserted_at_tail(head,value);
  } 
  count_duplicate(head);

    return 0;
}