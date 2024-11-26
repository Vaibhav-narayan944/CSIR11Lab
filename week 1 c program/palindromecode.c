#include<stdio.h>
int main()
{
	int a,b,r,t;
	scanf("%d",&a);
	t=a;
	b=0;
	while(a!=0)
	{
		r=a%10;
		b=b*10+r;
		a=a/10;
	}
	printf("\n%d",b);
	if(t==b)
	printf("\n its a palindrome");
	else
	printf("\n its not a palindrome");
	return 0;
}

