#include <stdio.h>
int afunc(n);
int main(void)
{	 	
	int n;

	scanf("%d",&n);	
	afunc(n);
	printf("OK\n");
	
	return 0;
}

int afunc(n)
{
	int i=0;
	for(i=1;i<=n;i++)
	{
		printf("*");
	}
	printf("\n");
	return ;
}
