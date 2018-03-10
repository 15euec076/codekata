#include<stdio.h>
#include<string.h>
int main(void)
{
  char s[100],s1[100];
  scanf("%s%s",&s,&s1);
  int n=strlen(s),x,y;
  int m=strlen(s1);
  int flag=0;
  if(n==m)
 {
  for(int i=0;i<n;i++)
  {
   for(int j=i+1;j<m;j++)
   {
     x=s[i]-s[j];
     y=s1[i]-s1[j];
     if(x==y)
    {
    flag=1;
    }
    else
    {
    	flag=0;
    	break;
    }
   }
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
  return 0;
  }
