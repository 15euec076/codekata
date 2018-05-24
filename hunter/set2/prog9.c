#include<stdio.h>
int main(void)
{
	int n,m,i,j;
	int a[10][10];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
	for(i=0;i<m;i++)
	{
	    scanf("%d",&a[i]);
	}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==a[i+1][j])
			{
			  printf("%d",a[i][j]);
			}
			
		}
	}
	
}
