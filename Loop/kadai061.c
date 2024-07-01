#include <stdio.h>
main()
{
	int num;
	num = 1;
	do
	{
		printf("%2d ",num);
		num++;
		if (num == 11)
		{
			printf("\n");
		}
	} while (num <= 20);
}