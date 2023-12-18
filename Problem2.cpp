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
    queue<int>q;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int value;
        cin>>value;
        q.push(value);
    }
    if(n!=m)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        bool flag = true;
        while(!st.empty())
        {
            if(st.top()!=q.front())
            {
                flag=false;
                break;
            }
            st.pop();
            q.pop();
        }
        if(flag == true) 
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