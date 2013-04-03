#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int p[100],l[100],n=0,m=0,len=0;
        char ch;
        string s1,s2;
        cin>>s1;
        len=s1.length();
        for(int i=0;i<1;i++)
        {
            cin>>p[i];
            //ch=getchar();
            n++;
        }
        for(int i=0;i<n;i++)
        {
            cin>>l[i];
        }
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<len;i++)
            {
                if(i<p[j]+l[j])
                {
                    s2[i]=s1[i];
                }
                while(i==p[j]+l[j]-1&&m<l[j])
                {
                    s2[i+m+1]=s1[i-m];
                    m++;
                }
                if(i>=p[j]+l[j])
                {
                    s2[i+m]=s1[i];
                }
            }
            s1=s2;
        }
        cout<<s1<<endl;
    }
}
