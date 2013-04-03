#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int i,k=1;
        for(i=0;k<=n;i++)
        {
            k*=2;
        }
        cout<<i-1<<endl;
        cin>>n;

    }
}
