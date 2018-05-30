#include <stdio.h>

int main(void) {
  int a[10][10],n,m,k,f;
  scanf("%d%d",&n,&m);
  int i,j;
  for(i=0;i<n;i++)
  {
  	for(j=0;j<m;j++)
  	{
  		scanf("%d",&a[i][j]);
  	}
  }
   for(i=0;i<n;i++)
  {
  	for(j=0;j<m;j++)
  	{
  	   if(a[i][j]==0)
  	   {
  	   	k=i;
  	   	f=j;
  	    for(i=0;i<n;i++)
  	    {
  	    	for(j=0;j<m;j++)
  	    	{
  	    	
  	    		a[k][j]=0;
  	   	            a[i][f]=0;	
  	    	}
  	    }
  	   
  	   }
  	}
  }
  
  for(i=0;i<n;i++)
  {
  	for(j=0;j<m;j++)
  	{
  		printf("%d",a[i][j]);
  	}
  	printf("\n");
  }
	return 0;
}
