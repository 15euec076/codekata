#include <stdio.h>
int main(void) {
	int i,t[50],r,a[50],n;
	scanf("%d",&n);
	scanf("%d",&r);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<r;i++)
	{
	t[i]=a[i];
	}
	for(i=0;i<n-r;i++)
	{
	a[i]=a[i+r];
	}
	for(i=0;i<n;i++)
	{
	a[n-r+i]=t[i];
	}
	for(i=0;i<n;i++)
	{
	printf("%d",a[i]);
	}
	return 0;
}
