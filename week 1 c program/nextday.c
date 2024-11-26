#include <stdio.h>
int main()
{
	int d,m,y;
	scanf("%d%d%d",&d,&m,&y);
	if(m==12&&d==31)
	{
		y++;
		d=1;
		m=1;
	}
	else
	
	//leap year
	if((y%4==0&&y%100!=0)||y%400==0)
	{
			if(d==29&&m==2)
		{
			d=1;
			m=3;
			
		}
		else if(d==30&&m==4,6,9,11)
		{
			m++;
			d=1;
			
		}
		else if(d==31&&m==1,3,5,7,8,10)
		{
			d=1;
			m++;
		}
		else
		{
			d++;
		}
	}
	//non leap year	
	else
	{
		if(m==2&&d==28)
		{
			d=1;
			m++;
		}
			else if(d==30&&m==4,6,9,11)
		{
			m++;
			d=1;
			
		}
		else if(d==31&&m==1,3,5,7,8,10)
		{
			d=1;
			m++;
		}
		else
		d++;
		
	}
	
	printf("\n%d\n%d\n%d",d,m,y);
	return 0;
}
