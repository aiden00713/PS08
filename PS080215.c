#include <stdio.h>
int afunc(int n);
int main(void)
{
	int n;
	
	scanf("%d",&n);
	printf("[%d]",afunc(n));
	
	return 0;
} 

int afunc(int n)
{
	int sum=0,i=1;
	for(;n>0;)
	{
		sum+=(n%10)*i;
		n/=10;
		i*=2;
	}
	return sum;
}
