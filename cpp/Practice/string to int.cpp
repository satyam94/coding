#include<iostream>
#include<cstring>
using namespace std;
int main()
{   string s;
    cin>>s;
    int l;
    l=s.length();
    int a[l];
    for(int i=0;i<l;i++)
    {       a[i]=s[i]-48;
            cout<<a[i];
    }
    system("pause");
}   
