#include <stdio.h>
main()
{
	int num,i;
	num = 0;
	i = 1;
	do
	{
		
		printf("%d+",i);
		num += i;
		i++;

		if (num >= 300)
		{
			printf("%d", i);
			break;
		}
	} while (num <= 300);


	printf("=%d", num + i);
}