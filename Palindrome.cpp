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
    Node *newNode = new Node (value);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
bool isPalindrome(Node *head,Node *tail)
{
    bool flag = true;
    Node *i=head;
    Node *j = tail;
    while(i!=j && i->next!=j )
    {
        if(i->val!=j->val)
        {
            flag=false;
            return flag;
        }
        i=i->next;
        j=j->prev;
    }
    if(i->val!=j->val)
    {
        flag=false;
        return flag;
    }
    return flag;
}
int main ()
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
   bool palindrome = isPalindrome(head,tail);
   if(palindrome==false)
   {
    cout<<"NO"<<endl;
   }
   else 
   {
    cout<<"YES"<<endl;
   }

    return 0;
}