#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	printf("enter string one");
	fgets(a,100,stdin);
	printf("enter string two");
	fgets(b,100,stdin);
	int n=strlen(a),k=strlen(b),i,c=0;
	for(i=n;i<k;i++)
	a[i]=b[c++];
	printf("%s",a);
	return 0;
	
}
