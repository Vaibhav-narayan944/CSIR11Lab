#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		printf("\n%d",i);
	}
	return 0;
}
