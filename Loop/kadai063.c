#include <stdio.h>
main()
{
	int num;
	num = 1;
	while (num <= 20)
	{
		printf("%2d ",num);
		num++;
		if (num == 11)
		{
			printf("\n");
		}
	}
}