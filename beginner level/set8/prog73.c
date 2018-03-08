#include<stdio.h>
int main(void)
{
 int n,k,l,flag=0;
 scanf("%d%d%d",&n,&l,&k);
 for(int i=l;i<k;i++)
 {
   if(i==n)
  {
   flag=1;
  }
 }
 if(flag==1)
 {
  printf("yes");
 }
 else
 {
  printf("no");
 }
}
