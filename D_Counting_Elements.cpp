#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin >> N;
    vector<int>A(N);
    for(int i=0;i<A.size();i++)
    {
        cin >> A[i];
    }
    int count=0;
    for(int i=0;i<A.size();i++)
    {
        auto it = find(A.begin(),A.end(),A[i]+1);
        if(it!=A.end())
        {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}