#include<stdio.h>
#include<string.h>
int main(void)
{
char s[100],a[100],b[100],temp[100];
int i,k=0,h=0;
scanf("%[^\n]s",s);
int l=strlen(s);
for(i=l-1;i>=0;i--)
{
 if(s[i]>=' ')
 {
   a[k]=s[i];
   k++;
 }
 b[h]=s[i];
 h++;
}
 i=0;
while(i!='\0')
{
temp[i]=a[i];
a[i]=b[i];
b[i]=temp[i];
i++;
printf("%c",temp[i]);
}
}
