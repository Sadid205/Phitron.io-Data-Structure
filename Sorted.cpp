#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        list<int>ls;
        set<int>st;
        int x;
        cin>>x;
        for(int i=0;i<x;i++)
        {
            int value;
            cin>>value;
            ls.push_back(value);
        }
        for(int value:ls)
        {
            st.insert(value);
        }
        for(auto it=st.begin();it!=st.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }

    return 0;
}