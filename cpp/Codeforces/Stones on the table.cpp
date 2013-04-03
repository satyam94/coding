#include<iostream>
using namespace std;
int main()
{   string s;
    int l;
    cin>>l;
    cin>>s;
    int i,m,ans=0;;
    for(i=0;i<l;i+=m)
    {   m=1;
        while(s[i]==s[i+m]&&(i+m)<l)
        {   ans++;
            m++;
        }
    }
    cout<<ans<<endl;
}

