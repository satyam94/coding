#include<cstdio>
#include<string>
using namespace std;
int main()
{   
          int count,ans,n,l,j=0;
          string s;
          char a,b;
          for(int k=0;k<10000;k++)
          {
          scanf("%c",&s[j]);
          
          if(s[j]<60)break;
          j++;
          }
          n=s[j]-48;
          for(int i=0;i<j;i++)
          {       scanf("%c",&a);
                  scanf("%c",&b);
                  count=0;
                  ans=0;
                  for(int j=0;j<l;j++)
                  {       if(s[j]==b)
                                     ans+=count;
                          if(s[j]==a)  
                                       count++;
                  }
                  printf("%d\n",ans);
           }
           
           system("pause");
}
  

                          
                                     
                                                
                  
