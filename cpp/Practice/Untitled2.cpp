#include<iostream.h>
#include<conio.h>
#include<string.h>


int count=0;

//func to display the sequence
void dis(char a[],int n)
{
   for(int jk=n-1;jk>=0;jk--)
     {
                 cout<<a[jk];
    }
cout<<"
";
}

//function to left shift last n elements
//of the array by one position
void shift(char a[],int n)
{
 char s;
 s=a[n-1];
 for(int i=n-1;i>0;i--)
   a[i]=a[i-1];
 a[0]=s;
}

//func to find all possible arrangements
void per(char a[],int m,int n)
{
for(int i=0;i<m;i++)
  {
   if(m>1)
   {
    shift(a,m);
    per(a,m-1,n);    //genetrating the tree
   }
   else
    {
    dis(a,n);       //displaying the leaf nodes of the tree
    count++;
    }
   }
}


void main()
{
//   char *a;
  int n;
  clrscr();

  cout<<"Enter a no : ";
  cin>>n;

  char *a = new (char[n]);

  for(int i=0;i<n;i++)
     a[i] = n-i+48;

//   dis(a,n);

  cout<<"Possible permutations are :"
  ;
  per(a,n,n);
  cout<<"Total No Of Permutations Is "<<count;
  getch();
}
