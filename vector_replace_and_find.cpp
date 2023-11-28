#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //replace
    // vector<int>v = {1,2,4,5,6,2,2,34,56,6,78,2};
    // replace(v.begin(),v.end()-1,2,100);
    // for(int x:v)
    // {
    //     cout<< x << " ";
    // }

      vector<int>v = {1,2,4,5,6,2,2,34,56,6,78,2};
    //  vector<int>:: iterator it;
    auto it = find(v.begin(),v.end(),100);
    if(it == v.end()) cout<< "Not Found";
    else cout<< "Found";
    //  cout<< *it;
    return 0;
}