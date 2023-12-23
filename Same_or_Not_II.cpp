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
class St 
{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz=0;

    void push(int value)
    {
        sz++;
        Node *newNode = new Node(value);
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
    void pop()
    {
       
       if(head==NULL)
       {
            return;
       }
        sz--;
       if(head==tail)
       {
        Node *deleteHead = head;
        delete deleteHead;
        tail = NULL;
        return;
       }
       else 
       {
        Node *deleteNode = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete deleteNode;
       }
    }
    int top()
    {
        if(tail==NULL)
        {
            return -1;
        }
        else return tail->val;
    }
    bool isEmpty()
    {
        if(sz==0) return true;
        else return false;
    }
    int size()
    {
        return sz;
    }

};
class Q
{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int value)
    {
        sz++;
        Node *newNode = new Node(value);
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
    void pop()
    {
        if(head==NULL)
        {
            return;
        }
        sz--;
       if(head==tail)
       {
        Node *deleteHead = head;
        delete deleteHead;
        tail = NULL;
        return;
       }
       else 
       {
         Node *deleteNode = head;
        head =  head->next;
        head->prev = NULL;
        delete deleteNode;
       }
    }
    int size()
    {
        return sz;
    }
    int front()
    {
        if(head==NULL)
        {
            return -1;
        }
        else
        {
            return head->val;
        }    
    }
    bool isEmpty()
    {
        if(sz==0) return true;
        else return false ;
    }

};
int main ()
{
  Q myQ;
  St mySt;

  int N,M;
  cin>>N>>M;
  while(N!=0)
  {
    int value;
    cin>>value;
    mySt.push(value);
    N--;
  }
  while(M!=0)
  {
    int value;
    cin>>value;
    myQ.push(value);
    M--;
  }
  if(myQ.size()!=mySt.size())
  {
    cout<<"NO"<<endl;
  }
  else
  {
    bool flag = true;
    while(!myQ.isEmpty())
    {
        
        if(myQ.front()!=mySt.top())
        {
            flag=false;
            break;
        }
        myQ.pop();
        mySt.pop();
    }
     if(flag== true)
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