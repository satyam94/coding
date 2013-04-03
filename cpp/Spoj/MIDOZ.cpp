#include<iostream>
using namespace std;
int main()
{
    int n,k,t,a,ans;
    cin>>t;
    while(t--)
    {   ans=0;
        cin>>n>>k;
        while(n--)
        {
            cin>>a;
            ans+=a/k;
        }
        cout<<ans<<endl;
    }
}
