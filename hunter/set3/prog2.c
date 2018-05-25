#include <stdio.h>

int main(void) {
	int n,m,a[10],lar;
	scanf("%d%d",&n,&m);
	int i=1,k=0,j;
	while(i<=n && i<=m)
	{
		k=0;
	   if(n%i==0 && m%i==0)
	   {
	   	a[k]=i;
	   }
               k++;	  
	   i++;
	  
	}
	
	lar=a[0];
	for(j=0;j<k;j++)
	{
	    if(lar<a[j])
	    {
	    	lar=a[j];
	    }
	   }
	   printf("%d",lar);
	
	
	return 0;
}
