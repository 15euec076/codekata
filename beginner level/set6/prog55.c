#include <stdio.h>

int main(void) {
	int n,m;
	scanf("%d%d",&n,&m);
	int c=m*n;
	if(c%2==0)
	{
		printf("even");	
	}
            else
            {
              	printf("odd");
            }

	return 0;
}
