#include <stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g�������H");
	scanf("%c",&moji);
	for (; moji <= 'z'; moji += 1)
	{
		printf("%c ", moji-0x20);
	}
}
