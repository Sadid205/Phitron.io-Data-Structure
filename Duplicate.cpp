#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin >> N;
    vector<int>A(N);
    for(int i=0;i<N;i++)
    {
        cin >> A[i];
    }
    bool count = false;
    for(int i=0;i<N-1;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(A[i]==A[j])
            {
                count = true;
                break;
            }
        }
    }
    if(count)
    {
        cout<<"YES"<< endl;
    }
    else 
    {
        cout<< "NO" << endl;
    }

    return 0;
}