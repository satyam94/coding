#include<iostream>
using namespace std;
void quicksort(int [],int [],int,int);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j,min,m=0;
        cin>>n;
        int a[n],b[n];
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        quicksort(a,b,0,n-1);
        for(int i=0;i<n;)
        {   min=1000001;
            for(j=i;j<n-1;j++)
            {
                if(b[j]-a[j]<min)
                {
                    min=b[j]-a[j];
                    m=j;
                }
                if(a[j]!=a[j+1])
                {
                    break;
                }
            }
            ans++;
            while(a[i]<b[m]&&i<n)
            {
                i++;
            }
        }
        cout<<ans<<endl;

    }
}
void quicksort(int x[],int y[],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j)
             {
                  temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
                  temp=y[i];
                  y[i]=y[j];
                  y[j]=temp;
             }
         }
         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         temp=y[pivot];
         y[pivot]=y[j];
         y[j]=temp;
         quicksort(x,y,first,j-1);
         quicksort(x,y,j+1,last);

    }
}
