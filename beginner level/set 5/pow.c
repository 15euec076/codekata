#include <stdio.h>

int main(void) {
	int a,t,flag=0;
	scanf("%d",&a);
            t=a;
            
            
              if(t%2!=0)
              {
               flag=1;
              }
            
            if(flag==0)
            {
              printf("yes");
            }
            else
            {
              printf("no");
            }
	return 0;
	
}
