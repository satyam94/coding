#include<cstdio>
int b[5000000]={0};
int main()
{
    int n,a[500000];
    a[0]=0,b[0]=1;
    for(int i=1;i<100;i++)
    {
                a[i]=a[i-1]-i;
                if(a[i]<=0||b[a[i]]==1)
                {
                           a[i]+=2*i;
                }
                b[a[i]]=1;
                printf("%d\n",a[i]);
    }

    while(1)
    {
            scanf("%d",&n);
                 if(n<0)break;
                 else
                 printf("%d\n",a[n]);
    }
}

