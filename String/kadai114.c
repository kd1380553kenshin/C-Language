#include <stdio.h>
main()
{
	int i;
	char moji[100];
	printf("文字列は?");
	scanf("%s",&moji);
	printf("文字列:%s  ",moji);

	for (i = 0; moji[i] != '\0'; i++);
	printf("文字数:%d文字",i);
}