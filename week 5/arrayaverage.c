#include<stdio.h>
int main()
{
	int i,s=0,a[5];
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	s=s+a[i];
	printf("%d",s/5);
	return 0;
	
}
