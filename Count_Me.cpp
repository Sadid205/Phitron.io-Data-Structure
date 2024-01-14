#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        string sentence;
        getline(cin,sentence);
        string word;
        map<string,int>mp;
        stringstream str(sentence);
        string name;
        int count =INT_MIN;
        while(str>>word)
        {
            mp[word]++;
            if(mp[word]>count)
            {
                count=mp[word];
                name = word;
            }
        }
        cout<<name<<" "<<count<<endl;
    }

    return 0;
}