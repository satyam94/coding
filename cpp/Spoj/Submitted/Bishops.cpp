#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int a,b,k,l=s.length();
        for(int i=0;i<l;i++)
        {
                s[i]-=48;
        }
        if(s[0]==1&&l==1)
        {   cout<<"1"<<endl;
            continue;
        }
        s[l-1]--;
        for(int i=l-1;i>0;i--)
        {
            if(s[i]<0)
            {
                s[i]=9;
                s[i-1]--;
            }
        }

        k=0;
        for(int i=l-1;i>=0;i--)
        {
            s[i]=(s[i]*2)+k;
            k=s[i]/10;
            s[i]%=10;
        }
        if(k!=0)    cout<<k;
        for(int i=0;i<l;i++)
        {
                s[i]+=48;
        }
        cout<<s<<endl;
    }
}
