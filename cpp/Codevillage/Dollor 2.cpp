#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n;
    int m[n],sum[n],bund[n][15];
    for(int i=0;i<n;i++)
    {       cin>>m[i];
            sum[i]=0;
            for(int j=0;j<m[i];j++)
            {       cin>>bund[i][j];
                    sum[i]+=bund[i][j];
            }
            cout<<endl;
    }
    system("pause");
}
              
    
