#include<iostream>
using namespace std;
unsigned long long combi(int n,int k)
{
    unsigned long long ans=1;
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
{   int n,r;
    while(cin>>n>>r)
    {   if(n<r)
            cout<<"-1";
        else
        {
            unsigned long long ans;
            ans=combi(n-1,r-1);
            ans%=10000007;
            cout<<ans;
        }
        cout<<endl;
    }
}
