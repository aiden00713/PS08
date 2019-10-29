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

	if(n>=0)
	{
		return n;
	}
	else
	{
		return -n;
	}
	return ;
}
