#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int num;
	srand(time(0));
	rand();
	num = rand() % 5 + 1;
	
	printf("今日のあなたの運勢は");
	for (int i = 0; i < num; i++)
	{
		printf("☆");
	}
	printf("です");
}
