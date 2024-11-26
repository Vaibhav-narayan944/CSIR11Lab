#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10];
	fgets(ch,10,stdin);
	int i;
	for(i=0;i<9;i++)
	{
		if(ch[i]<97)
		ch[i]=ch[i]+32;
	}
	printf("%s",ch);
	return 0;
}
