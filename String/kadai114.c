#include <stdio.h>
main()
{
	int i;
	char moji[100];
	printf("�������?");
	scanf("%s",&moji);
	printf("������:%s  ",moji);

	for (i = 0; moji[i] != '\0'; i++);
	printf("������:%d����",i);
}