#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	i=n%10;
	for(k=n;k>10;)
	k=k/10;
	printf("%d",i+k);
	return 0;
}
