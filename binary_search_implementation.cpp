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
int main ()
{
    Node *root = new Node (10);
    Node *a = new Node (10);
    Node *b = new Node (10);
    Node *c = new Node (10);
    Node *d = new Node (10);
    Node *e = new Node (10);
    Node *f = new Node (10);
    Node *g = new Node (10);
    Node *h = new Node (10);
    Node *i = new Node (10);

    //connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    h->right = i;
    b->right = d;
    d->left = f;
    d->right = g;

    return 0;
}