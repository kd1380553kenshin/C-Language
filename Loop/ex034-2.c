#include <stdio.h>
main()
{
	int ia,ib;
	printf("”‚ÍH");
	scanf("%d", &ia);
	do
	{
		ia--;
		ib = 0 ;
		do
		{
			printf("*");
			ib++;
		} while (ib <= 5);
		printf("\n");
	} while (ia > 0);
}