#include<stdio.h>
#include<string.h>
int main(void)
{
char a[100],b[100];
int len1,len2,length;
int i,j;
scanf("%s %s",&a,&b);
len1=strlen(a);
len2=strlen(b);
length=len1+len2;
for(i=len1+1;i<length;i++)
{a[i]=b[j];
}
printf("%s",a[i]);
return 0;
}
