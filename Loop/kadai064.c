#include <stdio.h>
main()
{
	int num;
	num = 20;
	while (num > 0)
	{
		printf("%2d ",num);
		num--;
		if (num == 10)
		{
			printf("\n");
		}
	}
}