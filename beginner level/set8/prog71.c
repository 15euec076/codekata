#include<stdio.h>
#include<stdio.h>
int main(void)
{
  char a[100];
  int flag;
  scanf("%s",&a);
  int len=strlen(a);
  for(int i=0;i<len;i++)
  {
    if(a[i]!=a[len-i-1])
    {
     flag=1;
     break;
    }
  }
  if(flag==1)
  {
   printf("no");
  }
  else
  {
   printf("yes");
  }
  return 0;
}
