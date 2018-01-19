#include <stdio.h>

int main(void) {
	int a[20],avg,i,n,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	  sum=sum+a[i];
	}
          avg=sum/n;
          printf("%d",avg);
	return 0;
	
}
