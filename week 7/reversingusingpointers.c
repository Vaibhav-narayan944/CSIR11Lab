#include<stdio.h>
#include<string.h>
void reversed(char*);
int main()
{
	int i;
	char a[100],b[100];
	fgets(a,100,stdin);
	reversed(a);
	return 0;
}
void reversed(char a[])
{
	int l=strlen(a),i;
	char t;
	for(i=0;i<l/2;i++)
	{
		t=a[i];
		a[i]=a[l-i-1];
		a[l-i-1]=t;
	}
	printf("%s",a);
}
