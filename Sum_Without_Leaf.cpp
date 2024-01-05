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
Node* input_tree()
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
            left=NULL;
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
int sum_of_nodes(Node *root)
{
    int sum = 0;
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 0;
    sum+=sum_of_nodes(root->left)+sum_of_nodes(root->right);
    return sum+=root->val;
}
int main ()
{
    Node *root = input_tree();
    int value = sum_of_nodes(root);
    cout<<value<<endl;
    return 0;
}