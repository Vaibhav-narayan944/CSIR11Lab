#include<stdio.h>
int main()
{
	int i,m,n;
	scanf("%d",&n);
	m=1;
	for(i=1;i<=n;i++)
	{
		m=m*i;
	}
	printf("%d",m);
	return 0;
	
}
