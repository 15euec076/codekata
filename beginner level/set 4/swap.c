#include<stdio.h>
int main(void)
{
 long int a,b,t;
scanf("%ld %ld",&a,&b);


  t=a;
  a=b;
  b=t;

printf("%ld %ld",a,b);
}
