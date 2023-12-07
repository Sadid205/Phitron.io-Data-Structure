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
    Node *newNode= new Node(value);
    if(head==NULL) 
    {
        head = newNode;
        tail= newNode;
    }
    else 
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void print_the_middle_element(Node *head)
{
    Node *temp = head;
    int count = 0;
    while(temp!=NULL)
    {
       
        count++;
         temp = temp->next;
    }
    temp = head;
    int middle = count/2;
   for(int i=0;i<middle-1;i++)
    {
        temp = temp->next;
    }
    if(count%2==0)
    {
        cout<<temp->val<<" "<<temp->next->val<<endl;;
    }
    else 
    {
        cout<<temp->next->val;
    }

}
int main ()
{
  Node *head =NULL;
  Node *tail = NULL;
  int value;
  while (true)
  {
    cin>>value;
    if(value==-1) break;
    insert_at_tail(head,tail,value);
  } 
  print_the_middle_element(head);

    return 0;
}