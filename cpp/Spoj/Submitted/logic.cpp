#include<iostream>
using namespace std;
int main()
{   unsigned long long n,ans=1,x=1;
    cin>>n;
    for(int i=2;i<=n;i++)
    {       x=2*x+(i-2);
            ans*=i;
    }
    ans+=x;
    cout<<ans<<endl;
}
