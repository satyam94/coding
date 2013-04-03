#include<iostream>
using namespace std;
int main()
{   long long i,j,n,t;
    cin>>t;
    while(t--)
    {         
              scanf("%lld",&n);
              if(n==0||n==1)
              {             printf("0");
                            continue;
              }
              long long c,min,max=0,check=0;
              int a[n];
              for(i=0;i<n;i++)
              {        scanf("%lld",&a[i]);
              }
              for(i=0;i<n;i++)
              {        if(a[i]>check)
                                    check=a[i];
                       else
                                    continue;
                       for(j=i;j<n;j++)
                       {                  if(a[j]>a[i])
                                                      min=a[i];
                                          else 
                                                      min=a[j];  
                                          c=(j-i)*min;
                                          if(c>max)
                                                     max=c;
                       }
              }
              printf("%lld\n",max);
              
    }
}                                                                                 
