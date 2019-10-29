#include <stdio.h>
int afunc(n1,n2,n3);
int main(void) 
{ 
    int n1,n2,n3; 
     
    scanf("%d%d%d",&n1,&n2,&n3); 
    printf("MIN=%d\n",afunc(n1,n2,n3)); 
     
    return 0; 
} 

int afunc(n1,n2,n3)
{
	if(n1>=n2)
	{
		if(n2>=n3)
		{
			return n3;
		}
		else
		{
			return n2;
		}
	}
	if(n2>=n3)
	{
		if(n3>=n1)
		{
			return n1;
		}
		else
		{
			return n3;
		}
	}
	if(n3>=n1)
	{
		if(n1>=n2)
		{
			return n2;
		}
		else
		{
			return n1;
		}
	}
}
