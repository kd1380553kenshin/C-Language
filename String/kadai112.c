#include <stdio.h>
main()
{
	char data1[10] = "abcde";
	char data2[10];
	printf("�z�� data1[]=");
	for (int i = 0; i < 5; i++) {
		printf("%c", data1[i]);
		data2[i] = data1[i];
	}
	printf("\n");

	printf("�z�� data2[]=");
	for (int i = 0; i < 5; i++) {
		printf("%c", data2[i]);
	}
}