#include<stdio.h>
#include<string.h>
int main(void)
{
 char s[50];
 scanf("%[^\n]s",&s);
 int i,n=strlen(s);
 if(s[0]>91)
 {
  s[0]=s[0]-32;
 }
 for(i=0;i<n;i++)
 {
  
  if(s[i]==' ')
  {
  	if(s[i+1]>91)
  	{
  		
                s[i+1]=s[i+1]-32;
  
  	}
  }
  
 }
 printf("%s",s);
 return 0;
 

}
