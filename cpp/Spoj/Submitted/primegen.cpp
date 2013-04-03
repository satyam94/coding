#include<iostream>
using namespace std;
int main()
{   int t;
    cin>>t;
    for(int o=0;o<t;o++)
    {       int a[32000]={0};
            for(int i=2;i*i<=32000;i++)
            {       if(a[i]==0)
                    {          for(int j=i;j<=32000/i;j++)
                               a[i*j]=1;
                    }
            }
            int prime[10000];
            int sum=0;
            for(int k=2;k<32000;k++)
            {       if(a[k]==0)
                    {          prime[sum]=k;
                               sum++;
                    }
            }
            int m,n;
            cin>>m>>n;
            if(m==2)
            {       cout<<2<<endl;
                    m=3;
            }
            if(m%2==0)  m++;
            if(m==1)
            {       cout<<2<<endl;
                    m=3;
            }
            for(int i=m;i<=n;i=i+2)
            {
                    for(int k=0;;k++)
                    {       if(i%prime[k]==0&&i!=prime[k])
                            break;
                            if(prime[k]*prime[k]>i)
                            {                      cout<<i<<endl;
                                                   break;
                            }
                    }
            }
            cout<<endl;
    }
}
