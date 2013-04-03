#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {   long long n,max=0,lim=0;
        scanf("%lld",&n);
        long long a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        for(int i=0;;i++)
        {
            if(pow(2,i)>max)
            {   lim=i;
                break;
            }
        }
        int flag,k=0;
        for(int i=0;i<lim;i++)
        {   flag=0;
            long long m=pow(2,i);
            for(int j=1;j<n;j++)
            {   long long k=a[j]^m,l=a[j-1]^m;
                if(k<=l)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("%lld\n",m);
                break;
            }
        }
        if(flag==1)
        {
            printf("-1\n");
        }
    }
}
