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
void inserted_at_tail(Node *&head,int value)
{
    Node*newNode = new Node(value);
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
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
void sorted(Node*head)
{
    int flag = false;
    Node *temp = head;
    while(temp->next!=NULL)
    {
        if(temp->val>temp->next->val)
        {
            flag = true;
            break;
        }
        temp=temp->next;
    }
    if(flag==true)
    {
        cout<<"NO"<<endl;
    }
    else 
    {
        cout<<"YES"<<endl;
    }
}
int main ()
{
    Node *head = NULL;
    while(true)
    {
        int value;
        cin>>value;
        if(value==-1) break;
        inserted_at_tail(head,value);
    }
    sorted(head);

    return 0;
}