#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_linked_list(Node *&head, int v)
{
    Node *NewNode = new Node(v);

    if (head == NULL)
    {
        head = NewNode;
           cout<<endl<<"Inserted at head"<<endl<<endl;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp ekhon last e
    temp->next = NewNode;
       cout<<endl<<"Inserted at tail"<<endl<<endl;
}
void print_linked_list(Node *head)
{
    cout<<endl;
    cout<<"Your Link_list is: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val <<" ";
        temp = temp->next;
    }
    cout<<endl<<endl;;
}
void insert_any_position(Node *head,int pos,int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for(int i=1;i<=pos-1;i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode; 
    cout<<endl<<"Insert at position at "<<pos<<endl<<endl;
}
void insert_at_head(Node *&head,int value)
{
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"Insert value at head"<<endl<<endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert Linked List" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert value at any position" << endl;
        cout << "Option 4: Insert value at Head" << endl;
        cout << "Option 5: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout<<"Insert Value: ";
            int v;
            cin >> v;
            insert_linked_list(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if(op==3)
        {
            int pos,val;
            cout<<"Please Enter Position: ";
            cin>>pos;
            cout<<"Please Enter Value: ";
            cin>>val;
           if(pos==0)
           {
              insert_at_head(head,val);
           }
           else 
           {
            insert_any_position(head,pos,val);
           }
        }
        else if(op==4)
        {
            int v;
            cout<<"Please Enter value: ";
            cin>>v;
            insert_at_head(head,v);
        }
        else if (op == 5)
        {
            break;
        }
    }
    return 0;
}