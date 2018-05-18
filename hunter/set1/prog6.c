#include <stdio.h>

int main(void) {
 
	int N,flag;
	scanf("%d",&N);
	int a[N],i,j;
	for(i=0;i<N;i++)
	{
		scanf("%d ",&a[i]);
	}
	int b;
	flag=1;
	
	for(i=0;i<N;i++)
	{
	  for(j=i+1;j<i;j++)
	  {
	  	if(a[i]==a[j])
	  	{
	  	  b=a[j];
	  	  flag=0;
	  	  break;
	  	}
	  	
	  }
	  
	}
	if(flag==0)
	{
	  printf("%d",b);
	}
	else
	{
		printf("unique");
	}
	          
	return 0;
}
	
