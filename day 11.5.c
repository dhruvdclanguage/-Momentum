#include<stdio.h>

int main()
{
	
	float a , b , c , total ;

	
	printf("Please enter your ele. units : ");
	scanf("%f",&a);


	if(a <= 50)
	{
		b = a * 0.50;
	}
	else if(a <= 150)
	{
		b = 25 + (a-50)*0.75;
	}
	else if(a <= 250)
	{
		b = 100 + (a-150)*1.20;
	}
	else
	{
		b = 220 + (a-250)*1.50;
	}


	c = b * 0.20;
	total = b + c;

	printf("\n\nYour electricity bill is of (20percent) is added to the bill.",total);

	return 0;
}

