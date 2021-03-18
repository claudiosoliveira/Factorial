#include<stdio.h>
int fatorial(int a)
{
	if(a==1)
	{
		return 1;
	}
	else
	{
		 a= a * (fatorial(a-1));
		 return a;
	}
}
int main()
{
	int n;
	n=0;
	while(n<=0)
	{
		scanf("%i",&n);
	}
	printf("%i! = %i",n,fatorial(n));
	
	return 0;
}
