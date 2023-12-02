#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int T;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        int N;
        cin >> N;
        vector<int>A(N);
        for(int i=0;i<N;i++)
        {
            cin >> A[i];
        }
        bool flag = true;
        for(int j=0;j<N-1;j++)
        {
            for(int k=j+1;k<N;k++)
            {
                if(A[j]>A[k])
                {
                    flag=false;
                }
            }
        }
        if(flag) cout<< "YES" << endl;
        else cout<< "NO" << endl;
    }

    return 0;
}