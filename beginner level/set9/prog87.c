#include <stdio.h>
int main(void) 
{
int x,y,rem,gcd;
scanf("%d%d",&x,&y);
do
{
rem=x%y;
if(rem==0)
break;
x=y;
y=rem;
}while(rem!=0);
gcd=y;
printf("%d",gcd);
return 0;
}
