#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main()
{   
          int count,ans,n,l;
          string s;
          char a,b;
          cin>>s;
          scanf("%d",&n);
          l=s.length();
          for(int i=0;i<n;i++)
          {       cin>>a;
                  cin>>b;
                  count=0;
                  ans=0;
                  for(int j=0;j<l;j++)
                  {       if(s[j]==b)
                                     ans+=count;
                          if(s[j]==a)  
                                       count++;
                  }
                  printf("%d\n",ans);
          }
}                         
                                     
                                                
                  
