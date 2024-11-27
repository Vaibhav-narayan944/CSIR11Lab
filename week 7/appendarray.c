#include<stdio.h>
#include<stdlib.h>
void appendarray(int a[],int b[]);
int main()
{
	int *a = (int*)malloc(5 * sizeof(int));  
    int *b = (int*)malloc(5 * sizeof(int));  
	int i;
	for(i=0;i<5;i++)
	scanf("%d%d",&a[i],&b[i]);
	appendarray(a,b);
	return 0;
}
void appendarray(int a[],int b[])
{
	int c[10],i;
	for(i=0;i<5;i++)
	c[i]=a[i];
	for(i=5;i<10;i++)
	c[i]=b[i];
	for(i=0;i<10;i++)
	printf("%d",c[i]);
}
