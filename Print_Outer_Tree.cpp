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
Node * input_level()
{
    int value;
    cin>>value;
    Node*root;
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
        Node *p = q.front();
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
            right = NULL;
        }
        else 
        {
            right = new Node(r);
        }
        p->left = left;
        p->right = right;
        if(left)q.push(left);
        if(right)q.push(right);
    }
    return root;
}
void print_left(Node *root)
{
    if(root==NULL) return ;
    if(root->left)
    {
        print_left(root->left);
    }
    if(root->left==NULL)
    {
        print_left(root->right);
    }
    cout<<root->val<<" ";

}
void print_right(Node *root)
{
    if(root==NULL) return;
    cout<<root->val<<" ";
    if(root->right)
    {
        print_right(root->right);
    }
    if(root->right==NULL)
    {
        print_right(root->left);
    }
}
void printOuter(Node *root)
{
  print_left(root->left);
  cout<<root->val<<" ";
  print_right(root->right);
}
int main ()
{
    Node *root = input_level();    
    printOuter(root);
    return 0;
}