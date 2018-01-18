#include <stdio.h>

int main(void) {
	int hrs,min,input;
	scanf("%d",&input);
	min=input%60;
	hrs=input/60;
	printf("%d",hrs);
	printf("\t");
	printf("%d",min);
	
	
	return 0;
}
