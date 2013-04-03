#include<iostream>
using namespace std;
int main()
{
          int sc[30], pass=0,k;
          string un,val;
          for(int i=0;i<26;i++)
          {        sc[i]=i+100;
                   val[i]=i+97;
          }
          cin>>un;
          for(int j=un.length()-1;j>=0;j-=2)
          {       un[j]=tolower(un[j]);
                  int k=25;
                  while(k >=0)
                  {         if(un[j]==val[k])
                            {                pass+=sc[k];
                            }
                            k--;
                  }
          }  
          cout<<"The pass is"<<pass;
          system("pause");
}              
          
