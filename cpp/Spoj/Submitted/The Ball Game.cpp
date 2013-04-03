#include<iostream>
#include<iomanip
>
using namespace std;
int main()
{   int t;
    double ans;
    cin>>t;
    while(t--)
    {         double n;
              cin>>n;
              ans=(n/(n+1));
              cout<<fixed<<setprecision(8)<<ans<<endl;
    }
}
              
