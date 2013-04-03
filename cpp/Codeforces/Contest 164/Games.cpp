#include<iostream>
using namespace std;
int main()
{   int ar[110]={0},br[110]={0};
    int a,b,n,k,ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {   cin>>a>>b;
        ar[a]++;
        br[b]++;
    }
    for(int i=1;i<101;i++)
    {   ans+=ar[i]*br[i];
    }
    cout<<ans<<endl;
}
