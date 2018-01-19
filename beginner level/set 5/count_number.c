#include<stdio.h>
int main(void)
{
 long int n;
 scanf("%ld",&n);
 int count=0,rem;

 while(n!=0)
 {
   rem=n%10;
   count++;
   n=n/10;
 }
 printf("%d",count);
 return 0;
}
 
