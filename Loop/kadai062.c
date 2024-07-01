#include <stdio.h>
main()
{
	int num;
	num = 20;
	do
	{
		printf("%2d ",num);
		num--;
		if (num == 10)
		{
			printf("\n");
		}
	} while (num > 0);
}