#include <stdio.h>
#include<string.h>

int main(void) {
	 char a[100];
             gets(a);
             int i,len,flag;
             len=strlen(a);
             for(i=0;i<len;i++)
             {
               if(a[i]>='a' && a[i]<='z') 
               {
                 flag=1;
               }
                else if (a[i]>='0' && a[i]<='9')
                 {
                   flag=2;
                 }
                else 
                 {
                   flag=0;
                 }
             }
             if(flag==1 && flag==2)
             {
              printf("yes");
             }
             else
             {
             printf("no");
             }
	
	return 0;
}
