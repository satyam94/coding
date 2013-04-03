#include<iostream>
#include<iomanip>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {         int i,j,k;
              float a,b,c,d;
              cin>>a;
              b=a-(int)a;
              j=b*10000;
              cout<<j<<endl;
              for(i=1;;i++)
              {       c=b*i;
                      
                      //cout<<fixed<<setprecision(1)<<c<<endl;
                      //system("pause");
                      if((c-(int)c)==0)
                      {                break;
                                       cout<<i<<endl;
                      }
              }
              cout<<i<<endl;
    }
}
