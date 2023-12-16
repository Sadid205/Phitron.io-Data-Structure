#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<int>duplicate_List;
    int value;
    while(true)
    {
        cin>>value;
        if(value==-1) break;
        duplicate_List.push_back(value);
    }
    duplicate_List.sort();
    duplicate_List.unique();
    
    for(auto value:duplicate_List)
    {
        cout<<value<<" ";
    }
    return 0;
}