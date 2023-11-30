#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin>>N;
    vector<int>A(N);
    for(int i=0;i<A.size();i++)
    {
        cin >> A[i];
    }
    for(int i=0;i<A.size();i++)
    {
       if(A[i]>0)
       {
        A[i]=1;
       }
       else if(A[i]<0)
       {
        A[i]=2;
       }
    }
    for(int X:A)
    {
        cout<< X << " ";
    }

    return 0;
}