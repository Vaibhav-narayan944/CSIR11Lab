//electricity bill
#include<stdio.h>
int main()
{
	int a;
	printf("enter the units");
	scanf("%d",&a);
	if(a<100)
	printf("you have to pay 100rs");
	else
	printf("you have to pay %d",100+3*a);
	return 0;
}
