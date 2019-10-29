#include <stdio.h>
int afunc(n);
int main(void)
{ 
    int n; 
     
    scanf("%d",&n); 
    printf("%d",afunc(n)); 
     
    return 0; 
} 

int afunc(n)
{
	int i=0,j=0;
	for(;n>0;)
	{
		j=n%10;
		i=i*10+j;
		n/=10;
	}
	return i;
}
