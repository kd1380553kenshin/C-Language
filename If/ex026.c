#include <stdio.h>
main()
{
	int a;
	printf("������́F\n");
	scanf("%d", &a);
	if (a == 2) {
		printf("�ŏI����28���ł�\n");
	}
	else {
		if (a == 4 || 6 || 9 || 11) {
			printf("�ŏI����30���ł�\n");
		}
		else {
			printf("�ŏI����31���ł�\n");
		}
	}	
}