#include <stdio.h>

int main(void) {
      int n,a[10],i,j,m,flag=0;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
      	scanf("%d",&a[i]);
      }
     scanf("%d",&m);
     for(i=0;i<n;i++)
     {
     	for(j=i+1;j<n;j++)
     	{
     		if(a[i]+a[j]==m)
     		{
     			flag=1;
     		}
     	}
     }
      if(flag==1)
      {
      	printf("YES");
      }
      else
      {
      	printf("NO");
      }
	return 0;
}
