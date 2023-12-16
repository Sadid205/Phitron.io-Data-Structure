#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    string value;
    Node *prev;
    Node *next;
    Node (string value)
    {
        this->value = value;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head,Node *&tail,string value)
{
    Node *newNode = new Node(value);
    if(head ==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

}
void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}
void find_url(Node *head,Node *&curr,string url)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        if(temp->value==url)
        {
            cout<<temp->value<<endl;
            curr=temp;
            return;
        }
        temp=temp->next;
    }
    cout<<"Not Available"<<endl;
}
void prev_step(Node *&curr)
{
    if(curr!=NULL && curr->prev!=NULL)
    {
        curr=curr->prev;
        cout<<curr->value<<endl;
    }
    else 
    {
        cout<<"Not Available"<<endl;
    }
}
void next_step(Node *&curr)
{
    if(curr!=NULL && curr->next!=NULL)
    {
        curr=curr->next;
        cout<<curr->value<<endl;
    }
    else 
    {
        cout<<"Not Available"<<endl;
    }
}
int main ()
{
    Node* head=NULL;
    Node*tail = NULL;
    Node *curr=NULL;
    string value;
    while(true)
    {
        cin>>value;
        if(value == "end") break;
        insert_at_tail(head,tail,value);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        string str,url;
        cin>>str;
        if(str=="visit")
        {
            cin>>url;
            find_url(head,curr,url);
        }
        else 
        {
            if(str=="prev")
            {
                prev_step(curr);
            }
            else if(str=="next")
            {
                next_step(curr);
            }
        }
    }
    return 0;
}