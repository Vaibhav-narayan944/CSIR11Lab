#include<stdio.h>
int main()
{
	int n,s;
	scanf("%d",&n);
	while(n!=0)
	{
		s++;
		n=n/10;
	}
	printf("%d",s);
}
