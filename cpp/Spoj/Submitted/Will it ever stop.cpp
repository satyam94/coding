#include<iostream>
#include<math.h>
using namespace std;
int main()
{   long long n;
    cin>>n;
    int i;
    for(i=0;i<50;i++)
    {       if(n==pow(2,i))
                           break;
    }
    if(i==50)
             cout<<"NIE";
    else
             cout<<"TAK";
}

    
    
    
