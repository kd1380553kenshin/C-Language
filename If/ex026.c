#include <stdio.h>
main()
{
	int a;
	printf("月を入力：\n");
	scanf("%d", &a);
	if (a == 2) {
		printf("最終月は28日です\n");
	}
	else {
		if (a == 4 || 6 || 9 || 11) {
			printf("最終月は30日です\n");
		}
		else {
			printf("最終月は31日です\n");
		}
	}	
}