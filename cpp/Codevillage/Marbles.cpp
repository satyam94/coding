#include<iostream>
using namespace std;
long long power(long long n,long long k,long long m)
{
    long long ans=1,mul=n;
    while(k!=0)
    {
        if(k%2!=0)
        {
            ans*=mul;
            ans%=m;
        }
        k/=2;
        mul*=mul;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,c,m,ans=1;
        cin>>n>>k>>c>>m;
        ans=n%m;
        ans*=k;
        ans%=m;
        ans*=c;
        ans%=m;
        ans*=power(k-1,n-1,m);
        ans%=m;
        cout<<ans<<endl;
    }
}
