#include<iostream>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {   long long n,i,ans1,ans2=0;
        cin>>n;
        if(n==1)
            cout<<"1 0\n";
        else
        {
            int flag=0;
            for(i=1;;i*=2)
            {   if(n<=i)
                    break;
            }
            ans1=i;
            while(n>0)
            {   if(n%2!=0)
                    flag=1;
                if(flag==1)
                    ans2++;
                n/=2;
            }
            cout<<ans1<<" "<<ans2<<endl;
        }
    }
}
