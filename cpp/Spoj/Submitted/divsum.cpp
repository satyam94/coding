#include<cstdio>
#include<math.h>
using namespace std;
int main()
{   int t,n,i;
    scanf("%d",&t);
    int a[500000]={0};
    while(t--)
    {         scanf("%d",&n);
              if(a[n]==0)
              {          a[n]++;
                         for(i=2;i<(sqrt(n));i++)
                         {       if(n%i==0)
                                      a[n]+=i+n/i;
                         }
                         if(i*i==n)
                                   a[n]+=i;
              }
              a[1]=0;
              printf("%d\n",a[n]);
    }
}       
