#include<stdio.h>
int main(void)
{
 int l,b,h;
 scanf("%d%d%d",&l,&b,&h);
 int v,tsa;
 v=l*b*h;
 tsa=2*((l*b)+(b*h)+(b*l));
 printf("%d %d",v,tsa);
 return 0;
 }
