#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int num;

	srand(time(0));
	rand();
	num = rand();
	printf("発生した乱数は%dです\n",num);
}