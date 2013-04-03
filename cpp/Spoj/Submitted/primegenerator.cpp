#include<iostream>
using namespace std;
int main()
{int t;cin>>t;
for(int o=0;o<t;o++)
{
    int a[100000];
    a[0]=2;a[1]=3;int sum=1;
    for(int i=4;i<32000;i++)
    {
        for(int k=0;;k++)
        {if(i%a[k]==0)break;if(a[k]*a[k]>i){sum++;a[sum]=i;break;}}
 }
 int m,n;cin>>m>>n;if(m%2==0)m++;
 for(int i=m;i<=n;i=i+2)
 {
     for(int k=0;;k++)
     {if(i%a[k]==0)break;if(a[k]*a[k]>i){cout<<i<<endl;break;}}
 }    
        
        cin.ignore();cin.get();       
        
}return 0;
}
