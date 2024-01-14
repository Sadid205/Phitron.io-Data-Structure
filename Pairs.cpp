#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int>a,pair<string,int>b)
{
    if(a.first<b.first) return true;
    else if(a.first==b.first)
    {
        if(a.second>b.second)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
    else 
    {
        return false;
    }
}
int main ()
{
    int n;
    cin>>n;
     list<pair<string,int>>lst;
    for(int i=0;i<n;i++)
    {
        string st;
        int cnt;
        cin>>st>>cnt;
        lst.push_back({st,cnt});
    }
    lst.sort(cmp);
    for(pair<string,int>value:lst)
    {
        cout<<value.first<<" "<<value.second<<" ";
        cout<<endl;
    }

    return 0;
}