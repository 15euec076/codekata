#include <stdio.h>

int main(void) {
	int a=0,b=1,c,count,N;
	scanf("%d",&N);
	printf("%d ",b);
    count=2;
    while(count<=N)
    {
      c=a+b;
      a=b;
      b=c;
      printf("%d ",c);
      count++;
    }
	return 0;
}
