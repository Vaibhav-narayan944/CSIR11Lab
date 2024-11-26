#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n][n];
	
	int k=2;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	a[i][j]=0;
	a[n/2][n-1]=1;
	i=n/2;j=n-1;
	while(k!=n*n+1)
	{
		i=i-1;j=j+1;
		if(i==-1&&j!=n)
		i=n-1;
		if(j==n&&i!=-1)
		j=0;
		if(a[i][j]!=0)
		{
			i=i+1;
			j=j-2;
		}
		if(i==-1&&j==n)
		{
			i=0;
			j=n-2;
		}
		a[i][j]=k++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
