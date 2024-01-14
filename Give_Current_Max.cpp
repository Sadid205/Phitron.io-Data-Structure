#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string name;
    int roll;
    int marks;
    Student(string name,int roll,int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
    public:
   bool operator()(Student a,Student b)
   {
        if(a.marks<b.marks)
        {
            return true;
        }
        else if(a.marks==b.marks)
        {
           if(a.roll>b.roll)
           {
            return true;
           }
           else 
           {
            return false;
           }
        }
        else 
        {
            return false;
        }
   }
};
int main ()
{
    int n;
    cin>>n;
    priority_queue<Student,vector<Student>,cmp>pq;
    for(int i=0;i<n;i++)
    {
        string name;
        int roll;
        int marks;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            string name1;
            int roll1;
            int marks1;
            cin>>name1>>roll1>>marks1;
            Student obj1(name1,roll1,marks1);
            pq.push(obj1);
            if(!pq.empty())
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
            else 
            {
                cout<<"Empty"<<endl;
            }
        }
        else if(x==1)
        {
            if(pq.empty())
            {
                cout<<"Empty"<<endl;
            }
            else 
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
        }
        else if(x==2)
        {
            if(!pq.empty())
            {
                pq.pop();
                if(!pq.empty())
                {
                    cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
                }
                else 
                {
                    cout<<"Empty"<<endl;
                }
                
            }
            else 
            {
                cout<<"Empty"<<endl;
            }
        }
    }

    return 0;
}