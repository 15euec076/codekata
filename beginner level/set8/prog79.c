#include<stdio.h>
#include<math.h>
int main(void)
{
int a,b,c;
scanf("%d %d",&a,&b);
c=a*b;
int i,count=0;
for(i=0;;i++)
{
if(c==pow(i,2))
count++;
}
if(count!=0)
printf("yes");
else
printf("no");
return 0;
}
