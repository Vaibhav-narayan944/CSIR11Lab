#include<stdio.h>
int main()
{
	int i,j,n,s,k=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
		printf(" ");
		for(j=0;j<=i;j++)
		printf("%d ",k);
		k++;
		printf("\n");
	}
}
