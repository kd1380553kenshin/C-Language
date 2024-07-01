#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int num;
	srand(time(0));
	rand();
	num = rand() % 100 + 1;
	if (num <= 30)
	{
		printf("‚¯‚ñ‚µ‚ñ‚ÌˆêŒ‚\n");
	}
	else
	{
		if (num >= 90)
		{
			printf("UŒ‚‚ªŠO‚ê‚½\n");
		}
		else
		{
			printf("’ÊíUŒ‚\n");
		}
	}
}