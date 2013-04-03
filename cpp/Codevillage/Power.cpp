#include<iostream>
using namespace std;
int main()
{   int t,k,n,i,a,b;
    cin>>t;
    while(t--)
    {         cin>>n;
              a=0;
              k=0;
              for(i=0;i<n;i++)
              {       cin>>b;
                      if(a>b)
                      k += a-b;
                      a=b;
              }
              
              cout<<k<<endl;
    }
    return 0;
}
                               
