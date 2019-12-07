#include<stdio.h>
int main()
{
	int i,n,flag,j;
	scanf("%d",&n);
	for (i=1;i<=n/2;i++)
	{
		flag=0;
		for (j=1;j<=n/2;j++)
      {
      	if(i%j==0)
      	{
      		flag=1;
      		break;
		  }
	  }
		}
	}
	if(flag==0)
	printf("%d",i);
    return 0;
}
