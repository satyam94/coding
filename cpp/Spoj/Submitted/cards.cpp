#include<cstdio>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              long long n;
              scanf("%lld",&n);
              long long sum=2*n;
              sum=(sum+(3*n*(n-1))/2)%1000007;
              printf("%lld\n",sum);
    }
}
              
