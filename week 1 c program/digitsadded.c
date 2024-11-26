#include<stdio.h>
int main()
{
	int i=0,s,n;
	scanf("%d",&n);
	s=0;
	while(n!=0)
	{
		i=n%10;
		s=s+i;
		n=n/10;
	}
	printf("%d",s);
	return 0;
	
}
