#include<stdio.h>
int main(void)
{
char ch[100];
scanf("%s",ch);
int k,i;
for(k=0;ch[k]!='\0';++k)
{
}
for(i=0;i<k;i++)
{
	if(ch[i]%2!=0)
printf("%c ",ch[i]);
}
return 0;
}
