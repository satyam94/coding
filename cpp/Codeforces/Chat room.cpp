#include<iostream>
using namespace std;
int main()
{   string s;
    cin>>s;
    int k=0;
    for(int i=0;i<s.length();i++)
    {   if((k==0 && s[i]=='h') || (k==1 && s[i]=='e') || (k==2 && s[i]=='l') || (k==3 && s[i]=='l') || (k==4 && s[i]=='o'))
            k++;
    }
    if(k==5)
        cout<<"YES";
    else
        cout<<"NO";
}
