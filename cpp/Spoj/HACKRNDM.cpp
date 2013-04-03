#include<iostream>
#include<cstdio>
using namespace std;
void quicksort(int [],int,int);
int main()
{   int n,k,check=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        for(int j=i;a[j]<a[i]+k+1;j++)
        {
            if(a[j]==a[i]+k)
                check++;
        }
    }
    cout<<check<<endl;
}

void quicksort(int x[],int first,int last){
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
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}

