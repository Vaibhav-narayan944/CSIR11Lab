//EEEEERRRROOOOORRRRRRRR
#include<stdio.h
#include<string.h>
int main()
{
	int i,position,n;
	char ch,str[100],str1[101];
	fgets(str,100,stdin);
	n=strlen(str);
	printf("enter the position");
	scanf("%d",&position);
	printf("enter the chareceter");
	fflush(stdin);
	scanf("%c",&ch);
	for(i=0;i<n;i++)
	str1[i]=str[i];
	str[n]=0;
	for(i=n;i>position;i--)
	str1[i]=str[i-1];
	str[position]=ch;
	printf("%s",str1);
	return 0;
}
