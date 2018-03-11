#include<string.h>
int main(void)
{
 char s[100],temp[100];
 gets(s);
 int n=strlen(s);
 for(int i=0;i<n;i++)
 {
  if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='O'|| s[i]=='I'|| s[i]=='U')
  {
    s[i]='\0';	
  }
 
 }
 for(int i=n;i>=0;i--)
 {
 	 printf("%c",s[i]);
 }
}
