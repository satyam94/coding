#include<iostream>
using namespace std;
long long combi(int n,int k)
{
    long long ans=1;
    k=k>n-k?n-k:k;
    for(int j=1;j<=k;j++,n--)
    {
        if(n%j==0)
        {
            ans*=n/j;
        }
        else if(ans%j==0)
        {
            ans=ans/j*n;
        }
        else
        {
            ans=(ans*n)/j;
        }
    }
    return ans;
}
int main()
{   int t;
    cin>>t;
    while(t--)
    {   int n,r;
        cin>>n>>r;
        long long ans;
        ans=combi(n-1,r-1);
        cout<<ans<<endl;
    }
}
