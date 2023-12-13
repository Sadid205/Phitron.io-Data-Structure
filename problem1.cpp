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
void insert_at_tail(Node *&head,Node *&tail,int value)
{
    Node *newNode = new Node(value);
    if(head==NULL)
    {
        head=newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int size(Node *head)
{
    int count=0;
    Node *temp = head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
bool isSame(Node *head1,Node *head2)
{
    bool flag = false;
    Node *temp1 = head1;
    Node *temp2 = head2;
    while(temp1!=NULL)
    {
        if(temp1->val!=temp2->val)
        {
            flag=true;
            return flag;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return flag;
}
int main ()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int value1;
    int value2;
    while(true)
    {
        cin>>value1;
        if(value1==-1) break;
        insert_at_tail(head1,tail1,value1);
    }
    while(true)
    {
        cin>>value2;
        if(value2==-1) break;
        insert_at_tail(head2,tail2,value2);
    }
    if(size(head1)!=size(head2))
    {
        cout<<"NO"<<endl;
    }
    else 
    {
       bool is_same = isSame(head1,head2);
       if(is_same==true)
       {
        cout<<"NO"<<endl;
       }
       else 
       {
        cout<<"YES"<<endl;
       }
    }
    return 0;
}