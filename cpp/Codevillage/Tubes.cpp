#include<cstdio>
long long ans[1000002]={0};
int main()
{         long long n,t;
          scanf("%lld%lld",&n,&t);
          long long a=0,b=0,c=0,p;
          for(int i=0;i<t;i++)
          {       scanf("%lld%lld%lld%lld",&p,&c,&a,&b);
                  ans[a]+=c;
                  ans[b+1]-=c;
          }
          for(int i=0;i<n;i++)
          {       ans[i+1]+=ans[i];
                  printf("%lld ",ans[i]);
          }
}
