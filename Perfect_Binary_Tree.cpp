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
Node * input_tree()
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
        Node *p = q.front();
        q.pop();
        Node *left;
        Node *right;
        int l,r;
        cin>>l>>r;
        if(l==-1)
        {
            left=NULL;
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
            right = new Node(r);
        }
        p->left = left;
        p->right = right;
        if(left)q.push(left);
        if(right)q.push(right);
    }
    return root;
}
int height(Node *root)
{
    if(root==NULL)return 0;
    int l = height(root->left);
    int r = height(root->right);
    return max(l,r)+1;
}
int countNode(Node *root)
{
    if(root==NULL) return 0;
    int l = countNode(root->left);
    int r = countNode(root->right);
    return l+r+1;
}
int main ()
{
    Node *root = input_tree();
    int h = height(root);
    int c = countNode(root);
    if(c==(pow(2,h)-1))
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    return 0;
}