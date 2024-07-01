#include <stdio.h>
main()
{
	int i,j,w;
	int d[5] = { 14,13,12,11,10 };
	for (i = 0; i < 4; i++)
	{
		for (j = i+1; j < 5; j++)
		{
			if (d[i] > d[j])
			{
				w = d[i];
				d[j] = d[i];
				d[j] = w;
			}
		}
		printf("%2d ", d[i]);
	}
	
}