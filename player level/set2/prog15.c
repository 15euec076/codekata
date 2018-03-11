#include<stdio.h>
#include<string.h>
int main(void)
{
 char s[100],ch;
 int i,j,count=1,max=1;
 scanf("%[^\n]s",&s);
 for(i=0;i<strlen(s);i++)
 {
 	for(j=i+1;j<strlen(s);j++)
 	{
                 if(s[i]==s[j])
                 {
                 	count++;
                 	if(count>max)
                 	{
                 		max=count;
                 		ch=s[i];
                 	}
                 }
            }
 }
 
 	printf("%c",ch);
 
}
