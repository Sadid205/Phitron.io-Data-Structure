#include<bits/stdc++.h>
using namespace std;
int main ()
{
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        st.push(value);
    }
    stack<int>newSt;
    while(!st.empty())
    {
        newSt.push(st.top());
        st.pop();
    }
    while(!newSt.empty())
    {
        cout<<newSt.top()<<" ";
        newSt.pop();
    }

    return 0;
}