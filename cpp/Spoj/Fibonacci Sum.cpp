#include<iostream>
#include<cstdio>
using namespace std;
class matrix
{
	public:
		long long a,b,c,d;
		matrix()
		{
			a=b=c=1;
			d=0;
		}
		matrix mul(matrix a,matrix b)
		{
			matrix ret;
			ret.a=(a.a*b.a)+(a.b*b.c);
			ret.b=(a.a*b.b)+(a.b*b.d);
			ret.c=(a.c*b.a)+(a.d*b.c);
			ret.d=(a.c*b.b)+(a.d*b.d);
			ret.a%=1000000007;
			ret.b%=1000000007;
			ret.c%=1000000007;
			ret.d%=1000000007;
			return ret;
		}
		matrix exp(matrix a,long long p)
		{
			if(p==0){
				matrix temp;
				temp.a=temp.b=temp.c=temp.d=1;
				return temp;
			}
			if(p==1)
				return a;
			if(p%2==0)
				return exp(mul(a,a),p/2);
			else
				return (mul(a,exp(mul(a,a),(p-1)/2)));
		}
		long long fib(long long n)
		{
			matrix s;
			s=exp(s,n);
			return ((s.d)%1000000007);
		}
};
int main()
{
	int t;
	long long n,m,k;
	scanf("%d",&t);
	while(t--){
		matrix v,u;
		scanf("%lld%lld",&n,&m);
		if(v.fib(m+3)>u.fib(n+2))
		k=(v.fib(m+3)-u.fib(n+2))%1000000007;
		else
		k=(-v.fib(m+3)+u.fib(n+2))%1000000007;;
		printf("%lld\n",k);
	}
	return 0;
}
