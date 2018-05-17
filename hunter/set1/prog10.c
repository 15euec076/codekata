#include <stdio.h>

int main(void) {
	int i,j,n,m,a[10],b[10];
	scanf("%d%d",&n,&m);
            int flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[i]);
	}


	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(b[j]==a[i])
			{
		            flag=1;
		            break;
			}
		}
		
		if(flag==0)
		{
			break;
		}
	}


	
if(flag==0)
{
	printf("NO");
}
if(flag==1)
{
	printf("YES");
}

	return 0;
}
