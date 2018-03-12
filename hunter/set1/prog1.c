#include <stdio.h>

int main(void) {
   int a[10],i,j,n,count=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   	scanf("%d",a[i]);
   }
   for(i=0;i<=n;i++)
   {
   	for(j=i+1;j<=n;j++)
   	{
   		if(a[i]==a[j])
   		{
   			
   			
   			printf("%d",a[i]);   
   			count=count+1;
   			
   		}
   	}
   }
   if(count==0)
   {
   	printf("unique");
   }
	return 0;
}
