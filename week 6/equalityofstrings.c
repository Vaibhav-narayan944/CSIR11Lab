#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10];
	fgets(a,10,stdin);
	fgets(b,10,stdin);
	int n1=strlen(a),n2=strlen(b),c=0,i;
	if(n1!=n2)
	{
	printf("unequal");
	return 1;}
	else
	for(i=0;i<n1;i++)
	if(a[i]==b[i])
	c++;
	if(c==n1)
	printf("equal");
	else
	printf("unequal");
	return 0;
}
