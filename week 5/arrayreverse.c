#include<stdio.h>
int main()
{
	int a[5],i,j,t;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=2;i++)
	{
		t=a[i];
		a[i]=a[4-i];
		a[4-i]=t;
		
	}
	for(i=0;i<5;i++)
    printf("%d",a[i]);
    return 0;
}
	
