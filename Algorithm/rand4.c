#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int num;
	srand(time(0));
	rand();
	num = rand() % 5 + 1;
	if (num == 1)
	{
		printf("今日のあなたの運勢は☆ です");
	}
	else
	{
		if (num == 2)
		{
			printf("今日のあなたの運勢は☆☆ です");
		}
		else
		{
			if (num == 3)
			{
				printf("今日のあなたの運勢は☆☆☆ です");
			}
			else
			{
				if (num == 4)
				{
					printf("今日のあなたの運勢は☆☆☆☆ です");
				}
				else
				{
					if (num == 5)
					{
						printf("今日のあなたの運勢は☆☆☆☆☆ です");
					}
				}
			}
		}
	}
}
