#include<iostream>
using namespace std;
int main()
{   int g1,g2,s1,s2,b1,b2;
    int t;
    cin>>t;
    while(t--)
    {         cin>>g1>>s1>>b1;
              cin>>g2>>s2>>b2;
              int l=0;
              while(g1<g2)
              {           g1++;
                          s1-=11;
                          l++;
              }
              while(b1<b2)
              {           b1+=9;
                          s1--;
                          l++;
              }
              while(s1<s2)
              {           if(g1>g2)
                          {        s1+=9;
                                   g1--;
                                   l++;
                          }
                          else if(b1>b2+10)
                          {        b1-=11;
                                   s1++;
                                   l++;
                          }
                          else 
                          {    l=-1;
                               break;
                          }
              }
              cout<<l<<endl;
    }
}
                   
                          
              
              
                                          
