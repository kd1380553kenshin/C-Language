#include <stdio.h>
main()
{
	char moji;
	printf("����(Ctrl+z�œ��͏I��)�H");
	while (scanf("%c", &moji) != EOF)
	{
		printf("%c\n",moji);
		printf("����(Ctrl+z�œ��͏I��)�H");
	}
}								