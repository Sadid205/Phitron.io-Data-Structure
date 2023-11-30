#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string S;
    cin >> S;

    vector<int>freq(26,0);
    for(int i=0;i<S.length();i++)
    {
        int value = S[i] -'a';
        freq[value]++;
    }
    for(int i=0;i<freq.size();i++)
    {
        if(freq[i]!=0)
        {
            char character = i +'a';
            cout<<character << " "<< ":" << " "<<freq[i]<< endl;
        }
    }


    return 0;
}