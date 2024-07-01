#include <stdio.h>
main()
{
	int i,j,cnt=0;
	for (i = 0; i < 3; i++)
	{
		for (j = 1; j <= 20; j++)
		{
			cnt++;
			printf("%d ", cnt);
		}
		printf("\n");
	}
}