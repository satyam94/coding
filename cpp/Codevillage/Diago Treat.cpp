#include<iostream>
using namespace std;
int main()
{   int t,n,m,k;
    cin>>t;
    for(int i=0;i<t;i++)
    {       cin>>n;
            cin>>m;
            if(m!=0)
            {       k=n%m;
                    cout<<k<<"\n";
            }
            if(m==0)
                    cout<<n<<endl;
    }
}
