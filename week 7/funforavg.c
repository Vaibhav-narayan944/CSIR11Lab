#include<stdio.h>
void fun();
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	fun(a);
	return 0;
}
void fun(int arr[1])
{
	int i,x=0;
	for(i=0;i<5;i++)
	x=x+arr[i];
	printf("%d",x/5);
}
