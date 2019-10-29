#include <stdio.h>
int afunc(n1,n2);
int main(void) 
{ 
    int n1,n2; 
     
    scanf("%d%d",&n1,&n2); 
    printf("[%d]\n",afunc(n1,n2)); 
     
    return 0; 
} 

int afunc(n1,n2)
{
	if(n1>n2)
	{
		return -1;
	}
	if(n1==n2)
	{
		return 0;
	}
	if(n1<n2)
	{
		return 1;
	}
	return ;
}
