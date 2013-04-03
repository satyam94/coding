#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int t,x,b,y;
    cin>>t;
    for(int i=0;i<t;i++)
    {       cin>>x;
            b=0;
            for(int j=1;j<=sqrt((double)x)+1;j++)
            {       if(x%j==0)
                    b++;
            }
            y=x-2;
            for(int j=1;j<=sqrt((double)y)+1;j++)
            {       if(y%j==0)
                    b++;
            }
            if(b==2)
                    cout<<"BUY"<<"\n";
            else
                    cout<<"DONT BUY"<<"\n";
    }
}
