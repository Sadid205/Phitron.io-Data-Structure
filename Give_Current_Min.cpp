#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    int que;
    cin>>que;
    for(int i=0;i<que;i++)
    {
        int q;
        cin>>q;
        if(q==0)
        {
            long long int value;
            cin>>value;
            pq.push(value);
            cout<<pq.top()<<endl;
        }
        else if(q==1)
        {
            if(!pq.empty())
            {
                cout<<pq.top()<<endl;
            }
            else 
            {
                cout<<"Empty"<<endl;
            }
        }
        else if(q==2)
        {
          if(!pq.empty())
          {
            pq.pop();
            if(!pq.empty())
            {
                cout<<pq.top()<<endl;
            }
            else 
            {
                cout<<"Empty"<<endl;
            }
          }
          else 
          {
            cout<<"Empty"<<endl;
          }
        }
    }

    return 0;
}