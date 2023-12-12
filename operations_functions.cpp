#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<int>myList = {20,10,30,10,50,10,10};
    // myList.remove(10);
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.unique();
    myList.reverse();
    for(int value:myList)
    {
        cout<<value<<endl;
    }

    return 0;
}