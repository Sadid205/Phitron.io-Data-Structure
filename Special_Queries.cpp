#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin>>N;
    queue<string>q;
    for(int i=0;i<N;i++)
    {
        int M;
        cin>>M;
        if(M==0)
        {
            string s;
            cin>>s;
            q.push(s);
        }
        else
        {   
            if(q.empty())
            {
                cout<<"Invalid"<<endl;
            }
           else 
           {
             cout<<q.front()<<endl;
            q.pop();
           }
        }
       

    }

    return 0;
}