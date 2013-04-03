#include<iostream.h>
#include<math.h>
int main()
{   int c,d,i,j,k,l;
    float a[3][3],b[6][6];
    float det;
    int n;
    n=3;
    
    cout<<"Enter the matrix elements";
    for(i=0;i<n;i++)
    {    for(j=0;j<n;j++)
            {    cin>>a[i][j];
                 b[i][j]=a[i][j];       
        }    
}    
    
    for(i=0;i<n;i++)
    {    for(j=i;j<n;j++)
            {    a[j][i] /= a[i][i];
                 for(k=i+1;k<n;k++)
                 {       for(l=0;l<n;l++)
                                  {   a[k][l] = a[k][l]- (a[k][i]*a[i][l]);
                                       det*= a[i+1][i+1];
                              }
              }
        }
   }
   
                                   
     
   cout<<det*a[0][0];
   system("pause");
   return 0;
}                      
                               
                                      
                                             
            
