#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int val;
    Node* next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
int size (Node *head)
{
    Node *temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
void insert_at_head(Node *&head,Node *&tail,int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head=newNode;
        tail= newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_at_tail(Node *&head,Node *&tail,int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        cout<<"Invalid"<<endl;
        return;
    }
    else 
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail =newNode;
    }
}
void insert_at_any_pos(Node *head,int poss,int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for(int i=1;i<=poss-1;i++)
    {
        temp=temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}
void print_normal(Node *head)
{
    Node *temp = head;
    cout<<"L ->";
    while(temp!=NULL)
    {
        cout<<" "<<temp->val;
        temp=temp->next;
    }
    cout<<endl;
}
void print_reverse(Node *tail)
{
    Node *temp = tail;
    cout<<"R ->";
    while(temp!=NULL)
    {
        cout<<" "<<temp->val;
        temp=temp->prev;
    }
    cout<<endl;
}
int main ()
{
    Node *head = NULL;
    Node *tail = NULL;
    int Q;
    cin>>Q;
    for(int i=0;i<Q;i++)
    {
        int X,V;
        cin>>X>>V;
        if(X==0)
        {
            insert_at_head(head,tail,V);
            print_normal(head);
            print_reverse(tail);
        }
        else if(X==size(head))
        {
            insert_at_tail(head,tail,V);
              print_normal(head);
            print_reverse(tail);
        }
        else if(X>size(head))
        {
            cout<<"Invalid"<<endl;
        }
        else 
        {
            insert_at_any_pos(head,X,V);
              print_normal(head);
            print_reverse(tail);
        }
    }

    return 0;
}