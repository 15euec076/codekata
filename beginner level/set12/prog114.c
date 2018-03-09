#include <stdio.h>
int main(void) 
{
	int i,n,m,a[100],count=1;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
		   if(count==m)
			{
				printf("%d",a[i]);
			}
		count=count+1;
		}
	}
			
	return 0;
}
