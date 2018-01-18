#include <stdio.h>

int main(void) {
	int i,arr[10],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
            scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
            
            printf("%d",arr[i]);
            printf("\t");
           	printf("%d",i);
           	printf("\n");
	
	}
	return 0;
}
