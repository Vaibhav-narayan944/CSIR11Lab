#include<stdio.h>
#include<stdlib.h>
struct bank
{
	int accno;
	char name[50];
	int bal;
};
struct bank s[2];
int transaction(int wr,int acno,int amt)
{
	for(i=0;i<2;i++)
	{
		if(wr==1)
		{
		
			if(s[i].accno=acno)
			{
				if(s[i].bal>=amt)
				{
					s[i].bal=s[i].bal-amt;
					printf("the remaining balence is %d",s[i].bal);
					return 1;
				}
				else 
				{
					printf("insufficiant balence");
					return 0;
				}
			}
		}
		else
		{
			if(s[i].accno=acno)
			{
				if(s[i].bal>=amt)
				{
					s[i].bal=s[i].bal+amt;
					printf("the remaining balance is %d",s[i].bal);
					return 1;
				}
				
			}
		}
	}
}
int main()
{
	int i;
	for(i=0;i<2;i++)
	{
		scanf("%d",&s[i].accno)
		fflush(stdin);
		fgets(s[i].name,50,stdin)
		fflush(stdin);
		scanf("%d",&s[i].bal)
	}
	int choice,amt,acno;
	printf("enter the choice,1:withdrawal,0:transaction");
	scanf("%d",&choice);
	printf("enter the amount");
	scanf("%d",amt);
	printf("enter acno");
	scanf("%d",&acno);
	int a=transaction(choice,)	
	
	
	
	
	
	
	
	
	
	
}
