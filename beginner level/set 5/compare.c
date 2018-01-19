#include <stdio.h>

int main(void) {
	char s[200],s1[200];
	int flag=0;
	scanf("%s %s",&s,&s1);
	for(int i=0;s[i]!='\0';i++)
	{
	  if(s[i]==s1[i])
	  {
	   flag=1;
	  }
	  
	  else
	  {
	   flag=0;
	  }
	  
	}
	if(flag==0)
	{
	 printf("%s",s1);
	}
	else
	{
	 printf("%s %s",s,s1);
	}
	
	return 0;
}
