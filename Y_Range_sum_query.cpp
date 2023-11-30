#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N,Q;
    cin >> N >> Q;
    vector<int>A(N);
    
    for(int i=1;i<=A.size();i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<Q;i++)
    {
        int L,R;
        cin >> L >> R;
        int sum = 0;
        for(int j=L;j<=R;j++)
        {
            sum+=A[j];
        }
        cout<< sum << endl;
    }
    
   

    return 0;
}