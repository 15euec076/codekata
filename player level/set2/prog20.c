#include<stdio.h>
int main(void)
{
 char s[100];
 gets(s);
 int i;
 for(i=0;i<strlen(s);i++)
 {
   if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
   {
     s[i]=s[i]+3;
   }
   printf("%c",s[i]);
 }
}
