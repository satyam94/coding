#include<cstdio>
#include<cstring>
void quicksort(long long a[],long long left,long long right);
long long max(long long ,long long );
long long min(long long ,long long );
long long a[1000100],b[1000100];
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
              long long n,x=0,y=0,count=0,ans=0;
              scanf("%lld",&n);
              long long j;
              memset(a,0,1000100);
              memset(b,0,1000100);
              for(j=0;j<n;j++)
              {
                      scanf("%lld%lld",&a[j],&b[j]);
              }
              quicksort(a,0,n-1);
              quicksort(b,0,n-1);
              long long i;
              for(i=1;i<=a[n-1];)
              {
                      if(i==a[x])
                      {
                                 count++;
                                 x++;
                      }
                      if(i==b[y])
                      {
                                 count--;
                                 y++;
                      }
                      if(count>ans)
                      {
                          ans=count;
                      }
                      if(i==a[n-1])break;
                      i=min(a[x],b[y]);

              }
              printf("%lld\n",ans);
    }
}
void quicksort(long long a[],long long left,long long right)
     {
     long long i = left,j=right;
     long long pivot=a[(left+right)/2];
     long long temp = 0;
     while (i<=j)
     {
           while (a[i]<pivot) i++;
           while (a[j]>pivot) j--;
           if (i<=j)
           {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
           i++;
           j--;
           }
     }
           if (left<j)
         quicksort(a,left,j);
         if (right>i) quicksort(a,i,right);

   }
   long long min(long long a,long long b)
   {
       if(a>b)return b;
       else return a;
   }
   long long max(long long a,long long b)
   {
       if(a>b)return a;
       else return b;
   }
