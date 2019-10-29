#include <stdio.h>
int afunc(n);
int main(void)
{
	int n;
	
	scanf("%d",&n);
	printf("[%d]",afunc(n));
	
	return 0;
} 

int afunc(n)
{
	int i=0;
	for(;n>0;)
	{
		n/=2;
		i++;
	}
	return i;
}
