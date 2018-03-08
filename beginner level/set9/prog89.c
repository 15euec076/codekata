#include <stdio.h>
int main(void) 
{
	char str[50],temp[50];
	int i,k,j;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]>str[j])
			{
				temp[k]=str[i];
				str[i]=str[j];
				str[j]=temp[k];
		}	}
	}
	printf("%s",str);
	return 0;
}
