#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin>> N;
    vector<int>A(N);
    vector<int>B(N);
    for(int i=0;i<A.size();i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<B.size();i++)
    {
        cin>>B[i];
    }
   vector<int>C;
   C.insert(C.begin(),B.begin(),B.end());
  for(int i=0;i<A.size();i++)
  {
    C.push_back(A[i]);
  }
  for(int X:C)
  {
    cout<< X << " ";
  }
    return 0;
}