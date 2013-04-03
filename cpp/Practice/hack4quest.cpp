#include<iostream>
using namespace std;
int ar[3500];
int main()
{   int check,i,j,k=0,l;
    for(i=2;i<3402;i++)
    {       check=0;
            for(j=0;j<k;j++)
            {        if(i%ar[j]==0)
                     {         check=1;
                               break;
                     }
            }
            if(check==0)
            {       ar[k]=i;
                    if(2149756351%ar[k]==0)
                    {
                        l=ar[k];
                        i=1;
                    }
                    k++;
            }
            if(i==1)
                break;
    }
    cout<<l;
}
