#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin >> N;
    vector<long long int>A(N);
    for(int i=0;i<N;i++)
    {
        cin >> A[i];
    }
    vector<long long int>B(N);
    B[0]=A[0];
    for(int i=1;i<N;i++)
    {
        B[i] = B[i-1]+A[i];
    }
    for(int i=N-1;i>=0;i--)
    {
        cout<<B[i]<<" ";
    }

    return 0;
}