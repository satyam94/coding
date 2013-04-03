#include<iostream>
using namespace std;
int main()
{   int t;
    cin>>t;
    int a,c1=0,c2=0,c3=0,ans=1;
    string s;
    while(t--)
    {         cin>>s;
              if(s=="1/4")          c1++;
              else if(s=="1/2")     c2++;
              else                  c3++;
    }
    if(c3<c1)
    {         ans+=c3;
              c1-=c3;
    }
    else
    {         ans+=c3;
              c1=0;
    }
    ans+=c2/2;
    c2=c2%2;
    if(c2==1 && c1>2)
    {        ans++;
             c1-=2;
    }
    else if(c2==1 && c1<=2)
    {        ans++;
             c1=0;
    }
    if(c1%4==0)
               ans+=c1/4;
    else
               ans+=c1/4 +1;

    cout<<ans<<endl;
    
}
                       
    
