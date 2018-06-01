#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[200];
	int i,j,m;
	scanf("%s",s);
	int l=strlen(s);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(s[i]==s[j])
			{
			  for(m=j;m<l;m++)
			  {      
			  	s[m]=s[m+1];
			  
			  }
			  
			}
		}
		
	}

	 printf("%s",s);
	 
            
	 
	
}
