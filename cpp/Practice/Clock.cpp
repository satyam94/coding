#include<time.h>
double start,end,time;
start=clock();
end=clock();
time=(end-start)/CLK_TCK;
cout<<time<<endl;
