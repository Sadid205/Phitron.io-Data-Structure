#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<int>myList = {10,20,30,40,50,60,70,30,30,40};
    // list<int>newList= {100,200,300};
    vector<int>v = {60,70,80};
    // list<int>newList;
    // // newList = myList;
    // newList.assign(myList.begin(),myList.end());
    // myList.push_back(100);
    // myList.push_front(200);
    // myList.pop_back();
    // myList.pop_front();
    // myList.insert(next(myList.begin(),2),100);
    // myList.erase(next(myList.begin(),2));
    // myList.insert(next(myList.begin(),2),{300,400,500});
    // myList.insert(next(myList.begin(),2),newList.begin(),newList.end());
    // myList.insert(next(myList.begin(),2),v.begin(),v.end());
    // myList.erase(next(myList.begin(),2),next(myList.begin(),5));
    // replace(myList.begin(),myList.end(),30,100);

    auto it  = find(myList.begin(),myList.end(),400);
    if(it==myList.end())
    {
        cout<<"NOT FOUND";
    }
    else 
    {
        cout<<"FOUND";
    }

    // for(int value:myList)
    // {
    //     cout<<value<<endl;
    // }

    return 0;
}
