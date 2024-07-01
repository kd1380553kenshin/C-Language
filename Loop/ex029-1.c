#include <stdio.h>
main()
{
	int num;
	printf("”‚ð“ü‚ê‚ÄF");
	scan("%d", &num);
	while (num >= 0)
	{
		printf("%d", num);
		num--;
	}
}