#include<cstdio>
using namespace std;
int main()
{
    int a[4],t=0;
    while(scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3])!=EOF)
    {   t++;
        int max1=0,max2=0;
        for(int i=0;i<4;i++)
        {
            if(a[i]>max1)
            {      max2=max1;
                   max1=a[i];
            }
            else if(a[i]>max2)
            {
                max2=a[i];
            }
        }
        printf("Case %d: %d\n",t,max1+max2);
    }
}
