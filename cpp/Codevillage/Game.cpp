#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int t,n,l,r;
    cin>>t;
    while(t--)
    {         cin>>n>>l>>r;
              if(n%2!=0)
              cout<<"Draw";
              else
              {   if((2*r)>l/tan(3.14/n))
                  cout<<"Abhay";
                  else
                  cout<<"Sunit";
              }
              cout<<"\n";
    }
}
