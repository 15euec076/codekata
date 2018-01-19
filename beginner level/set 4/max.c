#include <stdio.h>

int main(void) {
	int a[20];
	int i,max=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	 if(a[i]>max)
	 max=a[i];
	}
	printf("%d",max);
	return 0;
}
