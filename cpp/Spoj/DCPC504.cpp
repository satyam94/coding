#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int n,k;
    while(t--)
    {   int a=256;
        scanf("%d%d",&n,&k);
        int flag=0;
        for(int i=0;k>1;i++)
        {
            if(k>a)
            {
                k-=a;
                flag++;
            }
            a/=2;
        }
        if(flag%2==0)
            cout<<"M";
        else
            cout<<"F";
        cout<<endl;
    }
}
