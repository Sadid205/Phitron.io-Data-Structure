#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N,Q;
    cin >> N >> Q;
    vector<int>A(N);
    for(int i=1;i<=A.size();i++)
    {
        cin >> A[i];
    }
    for(int i=0;i<Q;i++)
    {
        int X;
        cin >> X;
        int found = 0;
        for(int j=1;j<=A.size();j++)
        {
            if(A[j]==X)
            {
                found=1;
            }
        }
        if(found)
        {
            cout<<"found"<< endl;
        }
        else 
        {
            cout<<"not found"<< endl;
        }
    }

    return 0;
}