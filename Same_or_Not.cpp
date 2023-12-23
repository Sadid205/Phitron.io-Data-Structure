#include<bits/stdc++.h>
using namespace std;
int main ()
{
    stack<int>st;
    queue<int>q;
    int N,M;
    cin>>N>>M;
    while(N!=0)
    {
        int value;
        cin>>value;
        st.push(value);
        N--;
    }
    while(M!=0)
    {
        int value;
        cin>>value;
        q.push(value);
        M--;
    }
    if(st.size()!=q.size())
    {
        cout<<"NO"<<endl;
    }
    else 
    {
        bool flag = true;
        while(!st.empty() && !q.empty())
        {
            if(st.top()!=q.front())
            {
                flag=false;
                break;
            }
            st.pop();
            q.pop();
        }
        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}