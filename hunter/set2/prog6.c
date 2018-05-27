#include <stdio.h>

int main(void)
{
int a[100],b[100],j,t,g,i,k,n,l;
scanf("%d%d",&n,&k);
scanf("%d",&l);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(a[i]==k)
	{
		for(g=i;g<n;g++)
		{
		a[g]=a[g+1];
		}
		n--;
	}
}

for(i=0;i<n;i++)
{
	
	b[i]=a[i]-k;

}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(b[i]>b[j])
		{
		t=b[i];
		b[i]=b[j];
		b[j]=t;
		}
}
}
for(i=0;i<l;i++)
{
printf("%d\n",(b[i]+k));

}
	return 0;
}
