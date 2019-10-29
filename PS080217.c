#include <stdio.h>
int afunc(n1,n2);
int main(void) 
{ 
    int n1,n2; 
     
    scanf("%d%d",&n1,&n2); 
    printf("GCD=%d\n",afunc(n1,n2)); 
     
    return 0; 
} 

int afunc(n1,n2)
{
	int i=0,n;
	for(i=1;i<=n1&&i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)  //這樣印出最小的因數 
		{
			n=i;
		}
	}
	return n;
}
