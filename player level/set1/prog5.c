#include<stdio.h>
#include<string.h>
int main(void)
{
  char roman[20];
  scanf("%[^/n]s",&roman);
  int a[10],i,t=0,res,len=strlen(roman);
  for(i=0;i<len;i++)
  {
   if(roman[i]=='I')
   {
     a[i]=1;
   }
   
   else if(roman[i]=='V')
   {
    a[i]=5;
   }
   else if(roman[i]=='X')
   {
    a[i]=10;
   }
   else if(roman[i]=='L')
   {
    a[i]=50;
   }
   else if(roman[i]=='C')
   {
    a[i]=100;
   }
   else if(roman[i]=='D')
   {
    a[i]=500;
   }
   else if(roman[i]=='M')
   {
    a[i]=1000;
   }
   else
   {
    printf("invalid");
   }
  }
   for(i=0;i<len;i+=2)
   {
     if(a[i]<a[i+1])
     {
       res=a[i+1]-a[i];
     }
     else
     {
       res=a[i]+a[i+1];
     }
   }
   t=res+t;
   printf("%d",t);
 
  }
