#include <stdio.h>
main()
{
	int i;
	printf("continue test program\n");
	for (i = 1; i <= 10; i++)
	{
		if (i == 7)continue;
	}
	printf("%3d",i);
}