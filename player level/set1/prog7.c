#include<stdio.h>
#include<string.h>
int main(void)
{
 char s[50],t[20];
scanf("%s",&s);
 int n=strlen(s),i;
 if(n%2==0)
{
 for(i=0;i<n;i+=2)
 {
  
    t[i]=s[i];
    s[i]=s[i+1];
    s[i+1]=t[i];
    
  }
   printf("%s",s);
 }
 else
 {
  for(i=0;i<n-1;i+=2)
  {
   t[i]=s[i];
    s[i]=s[i+1];
    s[i+1]=t[i];
    
  }
   printf("%s",s);
  }
 return 0;
 
