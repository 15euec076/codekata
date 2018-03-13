#include <stdio.h>

int main(void) 
{
	int n,i,j,flag=0;
	scanf("%d",&n);
	for(j=2;j<=n;j++)
	{
		if(n%j==0)
		{
			flag=0;
			for(i=2;i<=j/2;i++)
			{
			if(j%i==0)
			{
			flag=1;
			break;
			}
			}
		
	
	if(flag==0)
	{
		printf("%d ",j);
	}
		}
	}
	return 0;
}
