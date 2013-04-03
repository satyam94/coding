#include<cstdio>
#include<math.h>
using namespace std;
int ar[3500];
int main()
{   int check,i,j,k=0;
    for(i=2;k<3402;i++)
    {       check=0;
            for(j=0;j<k;j++)
            {        if(i%ar[j]==0)
                     {         check=1;
                               break;
                     }
            }
            if(check==0)
            {       ar[k]=i;
                    k++;
            }
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {         int m,n;
              printf("\n");
              scanf("%d",&m);
              scanf("%d",&n);
              if(m==1||m==2)
              {             printf("2 \n");
                            m=3;
              }
              if(m%2==0)      m=m+1;
              for(i=m;i<=n;i+=2)
              {       check=0;
                      for(j=0;ar[j]<=sqrt(i);j++)
                      {       if(i%ar[j]==0)
                              {         check=1;
                                        break;
                              }
                      }
                      if(check==0)
                      printf("%d\n",i);
              }
    }
}
