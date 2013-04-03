#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    for(int i=1;;i++)
    {
            if(i%123==0)
            {
                        b=i;
                        a=0;
                        for(int j=0;j<5;j++)
                        {
                                
                                a=a+b%10;
                                b=b/10;
                        }
                        if(a==33){c=i;break;}
            }
    }
            cout<<c;
            system("pause");
                        }
                        
