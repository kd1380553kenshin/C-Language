#include <stdio.h>
main()
{
	int a;
	printf("西暦を入力：");
	scanf("%d", &a);
	if (a < 1989) {
		printf("あなたは昭和生まれです\n");
	}
	else {
		printf("あなたは平成生まれです\n");
	}
}