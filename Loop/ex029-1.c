#include <stdio.h>
main()
{
	int num;
	printf("数を入れて：");
	scan("%d", &num);
	while (num >= 0)
	{
		printf("%d", num);
		num--;
	}
}