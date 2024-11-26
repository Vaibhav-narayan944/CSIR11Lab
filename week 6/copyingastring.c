#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	fgets(s,100,stdin);
	char b[100];int i,c=0;
	for(i=0;s[i]!='\0';i++){
	
	b[i]=s[i];
	c++;}
	for(i=0;i<c;i++)
	printf("%c",s[i]);
	return 0;
}

