#include<bits/stdc++.h>
using namespace std;

int main ()
{
    list<int>myList;
    int Q;
    cin>>Q;
    for(int i=0;i<Q;i++)
    {
        int X,V;
        cin>>X>>V;
        if(X==0)
        {
            myList.push_front(V);
             cout<<"L ->";
                for(auto value:myList)
                {
                    cout<<" "<<value;
                }
                cout<<endl;
                 cout<<"R ->";
                for(auto it=myList.rbegin();it!=myList.rend();it++)
                {
                    cout<<" "<<*it;
                }
                cout<<endl;
        }
        else if(X==1)
        {
            myList.push_back(V);
            cout<<"L ->";
                for(auto value:myList)
                {
                    cout<<" "<<value;
                }
                cout<<endl;
                 cout<<"R ->";
                for(auto it=myList.rbegin();it!=myList.rend();it++)
                {
                    cout<<" "<<*it;
                }
                cout<<endl;
        }
        else if(X==2)
        {
            int sz = myList.size();
            if(V<sz)
            {
                auto it = next(myList.begin(),V);
                myList.erase(it);
                cout<<"L ->";
                for(auto value:myList)
                {
                    cout<<" "<<value;
                }
                cout<<endl;
                 cout<<"R ->";
                for(auto it=myList.rbegin();it!=myList.rend();it++)
                {
                    cout<<" "<<*it;
                }
                cout<<endl;
            }
            else 
            {
                cout<<"L ->";
                for(auto value:myList)
                {
                    cout<<" "<<value;
                }
                cout<<endl;
                cout<<"R ->";
                for(auto it=myList.rbegin();it!=myList.rend();it++)
                {
                    cout<<" "<<*it;
                }
                cout<<endl;
            }

        }
    }

    return 0;
}