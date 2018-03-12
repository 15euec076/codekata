#include<stdio.h>
int main(void)
{
  int i,r,l,m;
  scanf("%d%d",&r,&l);
  if(r>l)
  {
    m=r;
  }
  else
  {
     m=l;
  }
  for(i=2;i<=m;i++)
  {
    if(i%l==0 && i%r==0)
    {
     printf("%d",i);
    }
  }
}
