#include <stdio.h>
main()
{
	int num,sum;
	num = 1, sum = 0;
	while (sum <= 300)
	{
		printf("%d",num);
		if (sum < 300)
		{
			printf("+");
		}
		sum += num;
		num++;
	}
	printf("=%d",sum);
}