#include<iostream>
using namespace std;
char s2[10001000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int k=0,l=0,a[26]={0};
        char *s2 = new char[10001000];
        string s1;
        cin>>s1;
        for(int i=0;i<s1.length();i++)
        {
            if(s2[l]==s1[i])
            {
                l++;
            }
            else
            {
                s2[k]=s1[i];
                k++;
            }
            a[s1[i]-65]++;
        }
        if(2*k==s1.length())
        {
            cout<<s2<<endl;
        }
        else
        {
            cout<<"Twins don't exist"<<endl;
        }
    }
}
