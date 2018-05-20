#include<stdio.h>
#include<string.h>
void swap(char*x,char*y)
{
 char t;
 t=*x;
 *x=*y;
 *y=t;
 }
void permu(char a,int f,int l)
{
 int i;
 if(f==l)
 {
 printf("%s\n",a);
 }
 else
 {
  for(i=f;i<=l;i++)
  {
   swap((a+f),(a+i));
   permu(a,f+1,l);
   swap((a+f),(a+i));
   }
  }
int main()
{
char s[100];
scanf("%s",s);
int n=strlen(s);
permu(s,0,n-1);
return 0;
}
