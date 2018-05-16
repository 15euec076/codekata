#include <stdio.h>

int main(void) 
{
	int N;
	scanf("%d",&N);
	int a[10],i,res[10],t,count=0,k;
	int j=0;
	for(i=0;i<N;i++)
	{
	 scanf("%d ",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		if(i==a[i])
		{
			res[j]=i;
			j++;
			count=count+1;
		}
	}
	if(count==0)
	{
		printf("-1");
	}
	else
	{
	for(j=0;j<count;j++)
	{
		for(k=j+1;k<count;k++)
		{
			if(res[j]>res[k])
			{
				t=res[j];
				res[j]=res[k];
				res[k]=t;
			}
		}
	}
	for(j=0;j<count;j++)
	{
		printf("%d ",res[j]);
	}
	}
	
	return 0;
}
