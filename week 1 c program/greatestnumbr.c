//eatest of thee numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("a is the highest number");
	}
	else if(b>a&&b>c)
	{
		printf("b is the highest number");
	}
	else
	{
		printf("c is highest number");
	}
	return 0;
}
