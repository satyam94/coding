#include<iostream>
using namespace std;
int main()
{   int n,q;
    cin>>n>>q;
    int ar[100000]={0};
    while(q--)
    {         int x,a,b;
              scanf("%d%d%d",&x,&a,&b);
              if(x==0)
              {       for(int i=a;i<=b;i++)
                              ar[i]++;
              }
              else if(x==1)
              {       int check=0;
                      for(int i=a;i<=b;i++)
                      {       if(ar[i]%3==0)
                                           check++;
                      }
                      printf("%d\n",check);
              }
    }
}
