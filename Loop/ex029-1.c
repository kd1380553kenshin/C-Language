#include <stdio.h>
main()
{
	int num;
	printf("�������āF");
	scan("%d", &num);
	while (num >= 0)
	{
		printf("%d", num);
		num--;
	}
}