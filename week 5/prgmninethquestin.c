#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter number of elements");
	scanf("%d",&n);
	int a[n],b[n];
	printf("enter array values");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n+1;i++)
	for(j=0;j<n;j++)
	if(a[j]==i)
	{k=i;
	for(i=0;i<n+1;i++)
	if(i!=k)
	printf("%d",k);
}
return 0;}
	
