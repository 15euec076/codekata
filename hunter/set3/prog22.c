#include<stdio.h>
int main(void)
{
  int n,a[10],i,j,k,b[10],sum=1;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  { 
  	sum=1;
  	for(j=0;j<n;j++)
  	{
  	  if(i!=j)
  	  {
  	    
  	    sum=sum*a[j];
  	  }
  	  
  	  
  	}
  	b[k]=sum;
  	k++;
  }
  for(i=0;i<k;i++)
  {
  	printf("%d ",b[i]);
  }
  return 0;
}
