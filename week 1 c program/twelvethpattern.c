#include<stdio.h>
int main()
{
	int i,j,k=1,n,s;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",k);
			if(j<i)
			printf("*");
			
		}
		printf("\n");
		k++;
	
	}
}
