#include<iostream>
using namespace std;
long long a[2001][2001];
int main()
{         for(int i=0;i<2001;i++)
          {       a[0][i]=1;
                  a[i][0]=1;
          }
          for(int i=1;i<2001;i++)
          {       for(int j=1;j<2001;j++)
                  {       a[i][j]=(a[i-1][j]+a[i][j-1]+a[i-1][j-1])%1000000007;
                  }
          }
          int t;
          cin>>t;
          while(t--)
          {         int n,m;
                    cin>>n>>m;
                    cout<<a[n][m]<<"\n";
          }
}         
