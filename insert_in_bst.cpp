#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node * insert_level()
{
    int value;
    cin>>value;
    Node *root;
    if(value==-1)
    {
        root = NULL;
    }
    else 
    {
        root = new Node(value);
    }
    queue<Node*>q;
    if(root)q.push(root);
    while(!q.empty())
    {
        Node * p = q.front();
        q.pop();
        Node *left;
        Node *right;
        int l,r;
        cin>>l>>r;
        if(l==-1)
        {
            left = NULL;
        }
        else 
        {
            left = new Node(l);
        }
        if(r==-1)
        {
            right=NULL;
        }
        else 
        {
            right=new Node(r);
        }
        p->left = left;
        p->right = right;
        if(left)q.push(left);
        if(right)q.push(right);
    }
    return root;
}
// void print_level(Node*root)
// {
//     queue<Node*>q;
//     if(root)q.push(root);
//     while(!q.empty())
//     {
//         Node *p = q.front();
//         q.pop();
//         cout<<p->val<<" ";

//         if(p->left)q.push(p->left);
//         if(p->right)q.push(p->right);
//     }
// }
//
void insert_binary(Node*&root,int x)
{
    if(root==NULL) 
    {
        root = new Node(x);
        return;
    }
    if(x>root->val)
    {
        if(root->right==NULL)
        {
            root->right=new Node(x);
        }
        else 
        {
            insert_binary(root->right,x);
        }
    }
    else 
    {
        if(root->left==NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert_binary(root->left,x);
        }
    }
} 
void print_level(Node*root)
{
    queue<Node*>q;
    if(root)q.push(root);
    while(!q.empty())
    {
        Node *p = q.front();
        q.pop();
        cout<<p->val<<" ";

        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
    }
}
int main ()
{
    Node *root = insert_level();
    // print_level(root);
    // int value;
    // cin >> value;
    insert_binary(root,13);
    insert_binary(root,22);
    insert_binary(root,27);
    insert_binary(root,32);
    print_level(root);

    return 0;
}