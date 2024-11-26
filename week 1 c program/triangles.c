//triangle
#include<stdio.h>
int main()
{
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(a==90||b==90||c==90)
	printf("right angle");
	else if(a>90||b>90||c>90)
	printf("obtuse angle tringle");
	else
	printf("acute angle");
	return 0;
}
