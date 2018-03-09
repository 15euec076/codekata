#include<stdio.h>
int main(void)
{
 int a[10],n;
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
  scanf("%d",a[i]);
 }
 int min=a[0];
 for(int i=0;i<n;i++)
 {
  if(a[i]<min)
  {
    min=a[i];
  }
 }
 printf("%d",min);
 
 return 0;
}
