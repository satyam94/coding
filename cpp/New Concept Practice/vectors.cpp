#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    cout<<"Contents Now : ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n\n";
}

int main()
{
    vector<int> v;
    cout<<v.size()<<"\n";

    cout<<"Enter the values : ";
    int x=0;
    for(int i=0;i<5;i++)
    {
        //cin>>x;
        x=i+10;
        v.push_back(x);
    }

    cout<<"Size after adding 5 elements : "<<v.size()<<"\n";

    display(v);

    v.push_back(4.4);

    cout<<"Size after adding one more element : "<<v.size()<<"\n";

    display(v);

    vector<int> :: iterator itr = v.begin();
    //itr+=3;
    v.insert(itr+3,1,9);

    cout<<"After iterator : ";
    display(v);
}
