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
    Node*newNode = new Node(value);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else 
    {
        tail->next = newNode;
        tail = newNode;
    }
}
int count_element(Node *head)
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
bool is_Same(Node *head1,Node*head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    bool flag = true;
    while(temp1!=NULL && temp2!=NULL)
    {
        
        if(temp1->val!=temp2->val)
        {
            flag = false;
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
  while(true)
  {
    cin>>value1;
    if(value1==-1) break;
    insert_at_tail(head1,tail1,value1);
  }  
int value2;
while(true)
{
    cin>>value2;
    if(value2==-1) break;
    insert_at_tail(head2,tail2,value2);
}
int count1 = count_element(head1);
int count2 = count_element(head2);
if(count1!=count2) cout<<"NO"<<endl;
else 
{
   bool same = is_Same(head1,head2);
   if(same==true)
   {
    cout<<"YES"<<endl;
   }
   else 
   {
    cout<<"NO"<<endl;
   }
}
    return 0;
}