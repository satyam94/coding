#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
string str;
int i;
printf("Enter your string");
scanf("%[^\t\n]s",str);
i = str.length();
printf("%s %d",str,i);
system("pause");

}
