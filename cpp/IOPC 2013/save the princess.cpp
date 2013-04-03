#include<cstdio>
using namespace std;
void array(long long k[],long long x[3]);
long long distance(long long[],long long[]);
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long a[n][3],ans[n];
        for(long long i=0;i<n;i++)
        {
            scanf("%lld%lld%lld",&a[i][0],&a[i][1],&a[i][2]);
            ans[i]=0;
        }
        long long k[3]={0},l[3]={0};
        array(k,a[0]);
        long long min=100000000;
        for(long long i=1;i<n;i++)
        {   array(l,a[i]);
            for(long long j=1;j<i;j++)
            {
                ans[i]+=distance(a[j],a[j-1]);
            }
            for(long long j=i+1;j<n;j++)
            {
                    long long d1=distance(a[j],k);
                    long long d2=distance(a[j],l);
                    if(d1<d2)
                    {
                        ans[i]+=d1;
                        array(k,a[j]);
                    }
                    else
                    {
                         ans[i]+=d2;
                         array(l,a[j]);
                    }
            }
            if(ans[i]<min)
            {
                min=ans[i];
            }
        }
        printf("%lld\n",min);
    }
}
void array(long long k[],long long x[3])
{
    k[0]=x[0];
    k[1]=x[1];
    k[2]=x[2];
}
long long distance(long long x[3],long long y[3])
{   long long d=0;
    for(long long i=0;i<3;i++)
    {
        if(x[i]>y[i])
        {
            d+=x[i]-y[i];
        }
        else
        {
            d+=y[i]-x[i];
        }
    }
    return d;
}
