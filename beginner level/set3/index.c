#include <stdio.h>

int main(void) {
	int i,arr[10];
	for(i=0;i<strlen(arr);i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<strlen(arr);i++)
	{
	  printf("%d",arr[i]);
	  printf("\t");
	  printf("%d",i);
	  
	}
	return 0;
}
