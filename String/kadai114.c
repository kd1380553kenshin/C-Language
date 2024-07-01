#include <stdio.h>
main()
{
	int i;
	char moji[100];
	printf("•¶š—ñ‚Í?");
	scanf("%s",&moji);
	printf("•¶š—ñ:%s  ",moji);

	for (i = 0; moji[i] != '\0'; i++);
	printf("•¶š”:%d•¶š",i);
}