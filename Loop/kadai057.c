#include <stdio.h>
	main()
	{
		char moji, ia;
		printf("�A���t�@�x�b�g�������H");
		scanf("%c", &moji);
		for (ia = moji-0X20; ia <= 'Z'; ia = ia + 0x1)
		{
			printf("%c ", ia);
		}
	}