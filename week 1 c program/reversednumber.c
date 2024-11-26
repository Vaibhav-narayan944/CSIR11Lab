#include<stdio.h>
int main()
{
	int a,b,r;
	scanf("%d",&a);
	b=0;
	while(a!=0)
	{
		r=a%10;
		b=b*10+r;
		a=a/10;
	}
	printf("%d",b);
	return 0;
}
