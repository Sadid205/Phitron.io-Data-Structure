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
void print_linked_list(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
void insert(Node *head,int pos,int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for(int i=1;i<=pos-1;i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp!=NULL)
    {
       
        count++;
         temp = temp->next;
    }
    return count;
}
void insert_head(Node *&head,int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insert_tail(Node *&head,Node *&tail,int val)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        tail=newNode;
    }
    else 
    {
        tail->next = newNode;
        tail = newNode;
    }
}
int main ()
{
    Node *head = new Node(10);   
    Node *a = new Node(20);   
    Node *b = new Node(30);   
    Node *c = new Node(40);   
    Node *d = new Node(50);
    Node *tail = d;   
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    cout<<"Tail->"<<tail->val<<endl;
    print_linked_list(head);
    int pos,val;
    cin>>pos>>val;
   if(pos>size(head))
   {
    cout<<"Invalid index"<<endl;
   }
   else if(pos==0)
   {
    insert_head(head,val);
   }
   else if(pos==size(head))
   {
    insert_tail(head,tail,val);
   }
   else 
   {
     insert(head,pos,val);
   }
    print_linked_list(head);
    cout<<endl<<"Tail->"<<tail->val<<endl;
    return 0;
}