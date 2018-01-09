#include <stdio.h>

int main(void) {
int a[10],i,n,min=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 min=a[0];
for(i=0;i<n;i++)
{
 if(a[i]<min)
 {
  min=a[i];
 }
}
printf("%d",min);
	return 0;
}
