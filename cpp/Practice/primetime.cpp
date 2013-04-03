#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;int q;
    int a[n+1];for(int i=0;i<n+1;i++){a[i]=0;}
    for(int i=2;i*i<=n;i++)
    {
        if(a[i]==0)
        {
            for(int j=i;j<=n/i;j++)
            {a[i*j]=1;}
        }       
     }       
     for(int k=n;k>-1;k--)
     {if(a[k]==0){q=k;break;}}
     
     for(int l=2;l<q;l++)
     {
       if(a[l]==0)
     {
     int t=0;
            int m=n;
            for(int w=0;;w++)
            {
                t=t+(m/l);m=m/l;
                if(m/l==0)break;
            }
            cout<<l<<"^"<<t<<""<<"*"<<"";
       }}
       int s=0;int m=n;
       for(int e=0;;e++)
       {s=s+(m/q);m=m/q;if(m/q==0)break;}
       cout<<q<<"^"<<s;
       
    cin.ignore();cin.get();return 0;
    
   }        
