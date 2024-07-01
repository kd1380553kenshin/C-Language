#include <stdio.h>
main()
{
	int i;
	char moji[100];

	printf("•¶Žš—ñ‚Í?");
	scanf("%s",&moji);
	for (i = 0; moji[i] < '\0'; i++) {
		moji[100] = getchar();
		putchar(moji[100]);
		printf("\n");
	}
}

//moji[100] = getchar();
//putchar(moji[100]);