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
		printf("けんしんの一撃\n");
	}
	else
	{
		if (num >= 90)
		{
			printf("攻撃が外れた\n");
		}
		else
		{
			printf("通常攻撃\n");
		}
	}
}