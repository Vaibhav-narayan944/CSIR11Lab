//eerrrrroooorrrrrrr
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n;
	char a[100],t;
	fgets(a,100,stdin);
	n=strlen(a);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	if(a[i]>a[j])
	{
		a[i]=t;
		a[i]=a[j];
		a[j]=t;
	}
	printf("%s",a);
	return 0;
}
