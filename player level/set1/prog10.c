#include <stdio.h>
#include<string.h>
int main(void) {
char s[100],s1[100];
scanf("%s%s",&s,&s1);
int n=strlen(s);
int m=strlen(s1);
int count=0;
if(n==m)
{
for(int i=0;i<n;i++)
{
	
	
		if(s[i]==s1[i])
		{
			count=count+0;
		}
		else
		{
		 count=count+1;
		}
	
}
if(count==1)
{
	printf("yes");
}
else 
{
	printf("no");
}
}
else
{
  printf("no");
}
	return 0;
}
