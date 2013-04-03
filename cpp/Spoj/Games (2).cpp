#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {         int i,j,k=0,l[4]={0},p=0,c;
              float a,b,d;
              string s;
              cin>>s;
              k=s.length();
              for(i=0;i<k;i++)
                      if(s[i]=='.')
                                   break;
              for(j=k-1;j>i;j--)
              {       l[p]=(s[j]-48);
                      cout<<l[p];
                      p++;
              }
              for(i=1;i<10000;i++)
              {       c=k*i;
                      int m=p+1;
                      while(m--)
                      {         if(c%10!=0)       continue;
                                                      
                      }
                      if(m==0)          break;
              }
              cout<<i<<endl;
    }
}
