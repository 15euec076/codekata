#include <stdio.h>
#include<string.h>
int main(void) {
	int count=0,i,j;
	char s[]="kabali";
	char temp,a[100];
	int n=strlen(s);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	int k=0,m;
	scanf("%d",&m);
	char temp1;
	while(k<m)
	{
	 scanf("%s",a);
	 int l=strlen(a);
	 for(i=0;i<l;i++)
	 {
	 	for(j=i+1;j<l;j++)
	 	{
	 	 if(a[i]>a[j])
	 	 {          
	 	 	temp1=a[i];
	 		a[i]=a[j];
	 		a[j]=temp1;
	 	 }
	 	}
	 }
	 	if(strcmp(s,a)==0)
	 	{
	 		count=count+1;
	 	}
	 	k++;
	 }
	 
	printf("%d",count);
	
	// your code goes here
	return 0;
}
