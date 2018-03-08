#include <stdio.h>

int main(void) {
	int n,first=0,second=1,next,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
             
	 next=first+second;
	 first=second;
	 second=next;
	 printf("%d",first);
	 
	}
	
	return 0;
}
