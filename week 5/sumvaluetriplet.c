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
	int v;
	scanf("%d",&v);
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	for(k=j+1;k<n;k++)
	if(a[i]+a[j]+a[k]==v)
	printf("%d %d %d",a[i],a[j],a[k]);
	return 0;
}

