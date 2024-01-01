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
    if(value==-1) root = NULL;
    else 
    {
        root = new Node (value);
    }
    queue<Node*>q;
    if(root)q.push(root);
    while(!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node *left;
        Node *right;
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
};
int countLeafNode(Node *root)
{
   if(root==NULL) return 0;
   if(root->left ==NULL && root->right==NULL)
   {
     return 1;
   }
   else
   {
     int l = countLeafNode(root->left);
     int r = countLeafNode(root->right);
     return l+r;
   }
}
int main ()
{
    Node *root = input_tree();
    cout<<countLeafNode(root)<<endl;

    return 0;
}