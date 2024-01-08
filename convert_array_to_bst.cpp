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
Node *convert(int a[],int l,int r)
{
    if(l>r) return NULL;
    int mid = (l+r)/2;
    Node *root = new Node(a[mid]);
    Node* leftRoot  = convert(a,l,mid-1);
    Node * rightRoot = convert(a,mid+1,r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
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
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
 Node *root = convert(a,0,n-1);
 print_level(root);
return 0;
}