#include<stdio.h>
int main(void)
{
 int n,m,i;
 int count=0,flag=0;
 scanf("%d%d",&n,&m);
 if(n==2)
 {
  count++;
 }
 for(i=n;i<=m;i++)
 {
 	for(int j=2;j<i;j++)
 	{
             if(i%j==0)
               {
   	    flag=1;
               }
}

if(flag==1)
{
count++;
}
}
printf("%d",count);

return 0;
}
