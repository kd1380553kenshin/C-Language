#include <stdio.h>
main()
{
	int ia, ib;
	printf("数を入れて：");
	scanf("%d",&ia);
	for (ib = 1; ib <= 5; ib++)
	{
		printf("%d ", ia * ib);
	}
}