#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int num,i;
	
	srand(time(0));
	rand();

	for (int i = 0 ; i <= 100; i++)
	{
		num = rand() % 300 + 1;
		printf("%03d ", num);
	}
}