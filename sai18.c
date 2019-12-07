#include<stdio.h>
int main()
{
	int i,n,flag=0;
	scanf("%d",&n);
	for (i=1;i<=n/2;i++)
	{
    if (n%1==0);
	{
		flag=1;
		break;
	
	}
	}
	if(flag==0)
	printf("prime");
	else
	printf("not prime"); 
    return 0;
}
