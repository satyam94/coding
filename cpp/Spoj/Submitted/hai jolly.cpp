#include<iostream>
#include<cstring>
using namespace std;
int main()
{         int t;
          cin>>t;
          while(t--)
          {         string s;
                    cin>>s;
                    int l;
                    l=s.length();
                    int a[l],b[50000]={0},c[50000]={0};
                    for(int i=0;i<l;i++)
                            a[i]=s[i]-48;
                            
                    for(int i=0;i<l-1;i++)
                    {       b[i]+=a[i];
                            b[i+1]+=(b[i]%252)*10;
                    }
                    b[l-1]+=a[l-1];
                    if(b[l-1]%252==0)
                               cout<<"Yes ";
                    else
                               cout<<"No ";
                    
                    for(int i=0;i<l-1;i++)
                    {       c[i]+=a[i];
                            c[i+1]+=(c[i]%525)*10;
                    }
                    c[l-1]+=a[l-1];
                    if(c[l-1]%525==0)
                               cout<<"Yes\n";
                    else
                               cout<<"No\n";
          }
}
                    
                    
                          
