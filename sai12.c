//print 1 to n nos
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	//for(i=0;i<n;i=i+2)/i/for even nos
	for(i=1;i<=n;i=i+2)//for odd nos
	printf("%d ",i);
	return 0;
}
