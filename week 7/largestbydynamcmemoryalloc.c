#include<stdio.h>
int main()
{
	int *a=(int*)malloc(5*sizeof(int));
	int m,i;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	m=a[1];
	for(i=0;i<5;i++)
	if(a[i]>m)
	m=a[i];
	printf("%d",m);
	return 0;
}
