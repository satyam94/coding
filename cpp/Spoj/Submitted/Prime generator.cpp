#include<math.h> 
#include<cstdio>
#include<iostream>
#include<time.h>
using namespace std;
int main()
{   int t;
    scanf("%d",&t);
    while(t--)
    {         int m,n,check;
              printf("\n");
              scanf("%d",&m);
              scanf("%d",&n);
              double start,end,time;
              start=clock();
              if(m==1||m==2)
              {             printf("2 \n");
                            m=3;
              }
              if(m%2==0)      m=m+1;
              for(int i=m;i<=n;i+=2)
              {       check=0;
                      for(int j=3;j<=sqrt(i);j+=2)
                      {       if(i%j==0)
                              {         check=1;
                                        break;
                              } 
                      }
                      if(check==0);
                      //cout<<i<<endl;
              }
              end=clock();
              time=(end-start)/CLK_TCK;
              cout<<time<<endl;
    }
}                      
                                                                             
