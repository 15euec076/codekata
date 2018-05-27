#include <stdio.h>
int main()
{
    int n,m,i,j,flag;
    int temp,count=0;
    scanf("%d %d",&n,&m);
    temp=n;
    if (n%2==0)
    {
        n++;
    }
    for (i=n;i<=m;i=i+2)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if((i%j)==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
