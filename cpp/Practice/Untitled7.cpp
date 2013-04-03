#include<iostream>
using namespace std;
int main()
{
    string s;
    getline (cin,s);
    int k=s.length();
    int i,a[k],marker[10000]={0},counter=1;
    for(i=0;i<k;i++)
    {
        if ((int)s[i]>=97)
        {
            a[i]=s[i]-96;
        }
        else if((int)s[i]>=65)
        {
            a[i]=s[i]-64;
        }
        else if((int)s[i]==32)
        {
            a[i]=0;
            marker[counter]=i;
            counter++;
        }
    }
    marker[counter]=i;
    string p;
    while(getline (cin,p))
    {
        int l=p.length(),marker2[10000]={0},counter2=1;
        int b[l];
        for(i=0;i<l;i++)
        {
            if ((int)p[i]>=97)
            {
                b[i]=p[i]-96;
            }
            else if((int)p[i]>=65)
            {
                b[i]=p[i]-64;
            }
            else if((int)p[i]==32)
            {
                b[i]=0;
                marker2[counter2]=i;
                counter2++;
            }
        }
        marker2[counter2]=i;
        int x1=0,x2=0,flag=0;
        for(int i=0;;i++)
        {
            if(marker2[i]==0)break;
            else
            {
                int len=marker2[i+1]-marker2[i];
                int flag2=0;
                for(int j=x2;;j++ )
                {
                    if(marker[j]==0)break;
                    else if(marker[j+1]-marker[j]==len)
                    {
                        int flag3=0;
                        for(int q=marker[j];q<=marker[j+1];q++)
                        {
                            if(a[q]!=a[q-marker[j]+marker2[i]])
                            {
                                flag3=1;
                                break;
                            }
                        }
                        if(flag3==0)
                        {
                            x2= j+1;
                            flag2=1;
                        }
                    }
                }
                if(flag2==0)
                {
                    cout<<"No"<<endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"Yes"<<endl;
        }
    }
}
