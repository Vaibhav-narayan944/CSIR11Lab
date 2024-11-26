#include<stdio.h>
int main()
{
	int y,m;
	scanf("%d%d",&y,&m);
	if((y%4==0&y%100!=0)||y%400==0)
	{
		if(m==1,3,5,7,8,10,12)
		printf("31 days");
		else if(m==2)
		printf("29 days");
		else
		printf("30 days");
	}
	else
	{
		if(m==1,3,5,7,8,10,12)
		printf("31 days");
		else if(m==2)
		printf("28 days");
		else
		printf("30 days");
		
	}
	return 0;
}

