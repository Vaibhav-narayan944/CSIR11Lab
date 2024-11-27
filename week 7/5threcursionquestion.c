#include<stdio.h>
int fun(int n)
{
	if(n<=2)
	return n;
	else
	return fun(n-1)+fun(n-2)+fun(n-3);
}
int main()
{
	int n;
	scanf("%d",&n);
	int a=fun(n);
	printf("%d",a);
	return 0;
}
