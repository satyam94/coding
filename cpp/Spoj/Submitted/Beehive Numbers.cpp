#include<iostream>
using namespace std;
int main()
{
    int a[40000];
    for(int i=1;i<40000;i++)
    {
            a[i]=3*i*(i-1)+1;
    }


    int n;
    cin>>n;
    while(n>-1)
    {   int i;
        for(i=0;a[i]<n;i++)
        {

        }
        if(a[i]==n)
                cout<<"Y";
        else
                cout<<"N";
        cout<<endl;
        cin>>n;
    }
}
