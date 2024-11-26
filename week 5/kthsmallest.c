#include<stdio.h>
int main()
{
	int a[5],i,j,t;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<4;i++)
	for(j=0;j<4-i;j++)
	if(a[j]>a[j+1])
	{
	t=a[j];
	a[j]=a[j+1];
	a[j+1]=t;
}
    int k;
    printf("enter the value for k");
    scanf("%d",&k);
    printf("the kth smallest element is %d",a[k-1]);
}
