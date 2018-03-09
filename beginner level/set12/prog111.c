#include<stdio.h>
int main(void)
{
 int n,rem,res,count=1;
 scanf("%d",&n);
 while(n!=0)
 {
 	n=n/10;
 	if(n!=0)
 	{
 	 count++;
 	}
 }
 printf("%d",count);
}
