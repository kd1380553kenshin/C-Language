#include <stdio.h>
main()
{
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15 },
					{16,17,18,19,20},{21,22,23,24,25} };
	int b[5][5] = { {3,6,9,12,15},{18,21,24,27,30},{33,36,39,42,45 },
					{48,51,54,57,60},{63,66,69,72,75} };
	int c[5][5];

	printf("�z��a\n");
	for (int j = 0; j < 5; j++) {
		for (int k = 0; k < 5; k++) {
			c[j][k] = a[j][k];
			a[j][k] = b[j][k];
			b[j][k] = c[j][k];

			printf("%4d",a[j][k]);
		}
		printf("\n");
	}
	printf("�z��b\n");
	for (int j = 0; j < 5; j++) {
		for (int k = 0; k < 5; k++) {
			printf("%4d", b[j][k]);
		}
		printf("\n");
	}
}