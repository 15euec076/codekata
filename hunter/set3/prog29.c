#include<stdio.h>
int main(void)
{
	int n,a[10],i,j,sum,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		sum=a[i];
		for(j=i+1;j<n;j++)
		{
			sum=sum+a[j];
			if(sum>max)
			{
			max=sum;
			}
{
		}
	}
}

	printf("%d",max);
}
