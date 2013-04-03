#include<cstdio>
#include<math.h>
using namespace std;
int main()
{   int ar[3402],check,i,j,k=0;
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
}
