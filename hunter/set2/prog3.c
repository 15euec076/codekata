#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int stack[50];
int top=-1,front=0;
void push(char);

int main(void)
{
	int i,c;
	char b,s[100];
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		
		       scanf("%s",s);
		       for(i=0;i<strlen(s);i++)
		       {
		       	b=s[i];
		       }
		       push(b);
		for(i=0;(i<strlen(s)/2);i++)
		{
			if(stack[top]==stack[front])
			{
				top--;
				front++;
				
			}
			else
			{
				printf("NO");
				break;
			}
		}
		if((strlen(s)/2)==front)
		{
			printf("YES");
			front=0;
			top=-1;
		}
		break;
		case 2:
		        exit(0);
		        break;
		 default:
		       printf("error");
		
		      
	}
	return 0;
}
void push(char a)
{
	top++;
	stack[top]=a;
}
	

