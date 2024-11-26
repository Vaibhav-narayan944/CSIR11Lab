#include<stdio.h>
int main()
{
	int n,i,j,k=0;
	printf("enter number of elements");
	scanf("%d",&n);
	int a[n],b[n];
	printf("enter array values");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
		if(a[i]!=a[j])
		{b[k++]=a[i];
		break;}
	}
	for(i=0;i<n;i++)
	if(b[i]!=0)
	printf("%d",b[i]);
	return 0;
}

    
	
