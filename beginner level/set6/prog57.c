#include<stdio.h>
int main(void)
{
 int n,m;
 scanf("%d%d",&n,&m);
 n=n+m;
 m=n-m;
 n=n-m;
 printf("%d %d",n,m);
}
