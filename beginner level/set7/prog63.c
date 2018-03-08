#include<stdio.h>
int main(void)
{
 char s[100];
 int count=0;
 gets(s);
 for(int i=0;i<strlen(s);i++)
 {
  if(s[i]==' ')
  {
    count++;
  }
 }
 printf("%d",count+1);
}
