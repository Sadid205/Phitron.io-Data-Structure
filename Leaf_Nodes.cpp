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
        root=NULL;
    }
    else 
    {
        root = new Node (value);
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
            right = new Node (r);
        }
        p->left = left;
        p->right = right;
        if(left)q.push(left);
        if(right)q.push(right);
    }
    return root;
}
vector<int>v;
void print_leaf_nodes(Node *root)
{
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL) 
    {
        v.push_back(root->val);
    }
    print_leaf_nodes(root->left);
    print_leaf_nodes(root->right);
}
int main ()
{
    Node *root = input_tree();
    print_leaf_nodes(root);
    sort(v.begin(),v.end(),greater<int>());
    for(int value:v)
    {
        cout<<value<<" ";
    }

    return 0;
}