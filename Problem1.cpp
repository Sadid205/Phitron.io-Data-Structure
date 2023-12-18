#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value1;
        cin >> value1;
        st1.push(value1);
    }
    stack<int> st2;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int value2;
        cin >> value2;
        st2.push(value2);
    }

    if (n != m)
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = true;
        while (!st1.empty())
        {
            if (st1.top() != st2.top())
            {
                flag = false;
                break;
            }
            st1.pop();
            st2.pop();
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}