#include<cstdio>
using namespace std;
int main()
{   int check,i,j,k=0;
    int ar[35000];
    for(i=2;k<10000;i++)
    {       check=0;
            for(j=0;j<k;j++)
            {        if(i%ar[j]==0)
                     {         check=1;
                               break;
                     }
            }
            if(check==0)
            {       ar[k]=i;
                    printf("%d ",ar[k]);
                    k++;
            }
    }
}
