#include<stdio.h>
int main(void)
{
	int a[10],n,b[10];
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{ 
		for(k=j+1;k<n;k++)
		{
	                b[k]=a[i]+a[j];
		    if(b[k]==a[i])
		     {
			printf("%d %d %d\n",a[i],a[j],b[k]);
		     }
		}
			
		
	}
	}
}
