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
void level_order(Node *root)
{
    if(root==NULL)
    {
        cout<<"Tree nai"<<endl;
        return;
    }
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            //1.ber kore ana
            Node *f = q.front();
            q.pop();
            //2.jabotiyo ja kaj ache
            cout<<f->val<<" ";
            //3.tar children gulo ke rakha;
            if(f->right)q.push(f->right);
            if(f->left)q.push(f->left);
        }

}
int main ()
{
    Node *root = input_tree();
    level_order(root);

    return 0;
}