#include<stdio.h>
int main()
{
	int n,i;
	printf("enter number of elements");
	scanf("%d",&n);
	int a[n];
	printf("enter array values");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the value that you want");
	scanf("%d",&z);
	for(i=0;i<n;i++)
	{
		if(a[i]==z)
		s++;
	}
	printf("%d",z);
	return 0;
}
