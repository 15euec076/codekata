#include <stdio.h>
#include<string.h>
int main(void) {
                char s[50];
                int flag;
                scanf("%s",&s);
                for(int i=0;i<strlen(s);i++)
                {
                 if(s[i]=='1' || s[i]=='0')
                 {
                   flag=1;
                 }
                 else
                 {
                  flag=0;
                 }
                }
                if(flag==1)
                {
                 printf("yes");
                }
                else
                {
                 printf("no");
                }
	
	return 0;
}
