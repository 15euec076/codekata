#include<stdio.h>
int main(void)
{
 char s1[100],s2[100];
 scanf("%s",&s1);
 scanf("%s",&s2);
 int i,j;
 for(i=0;s1[i]!='\0';++i)
 {
   for(j=0;s2[j]!='\0';++j, ++i)
   {
     s1[i]=s2[j];
   }
 
 s1[i]='\0';
 }
 printf("%s",s1);
return 0;
}
 

