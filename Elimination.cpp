#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        stack<char>st;
        string s;
        cin>>s;
        for(char c:s)
        {
            if(st.empty())
            {
                st.push(c);
            }
            else 
            {
                if(st.top()=='0' && c=='1')
                {
                    st.pop();
                }
                else 
                {
                    st.push(c);
                }
            }
        }
        if(st.empty())
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