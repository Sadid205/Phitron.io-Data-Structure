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
        Node *p = q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node *left;
        Node *right;
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
vector<int>v;
void find_level_and_print(Node *root,int level)
{
    queue<pair<Node*,int>>q;
    if(root)q.push({root,0});
    while(!q.empty())
    {
        pair<Node*,int> p = q.front();
        q.pop();
        Node*first = p.first;
        int nodeLevel = p.second;

        if(level==nodeLevel)
        {
            v.push_back(first->val);
        }
        if(first->left)
        {
            q.push({first->left,nodeLevel+1});
        }
        if(first->right)
        {
            q.push({first->right,nodeLevel+1});
        }

    }
}
int main ()
{
    Node *root = insert_level();
    int level;
    cin>>level;
    find_level_and_print(root,level);
   if(!v.empty())
   {
     for(int value:v)
    {
        cout<<value<<" ";
    }
   }
   else 
   {
    cout<<"Invalid"<<endl;
   }
    return 0;
}