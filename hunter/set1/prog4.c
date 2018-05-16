#include<stdio.h>
int main(void)
{
	int N,flag=1;
	scanf("%d",&N);
	int a[10],b[10],i,j,k;
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{     
		flag=1;
		for(j=i+1;j<N;j++)
		{
			if(a[i]==a[j])
			{
		             flag=0; 
		             
			}
			
		}
	
       if(flag==1)
       {
       	printf("%d",a[i]);
       break;
       }
}
	
	
	
}
