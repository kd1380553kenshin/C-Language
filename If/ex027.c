#include <stdio.h>
main()
{
	char moji;
	printf("文字を入力：");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z')
	{
		printf("変換すると%c\n" , moji+0x20);
	}
	else
	{
		if (moji >= 'a' && moji <= 'z')
		{
			printf("変換すると%c\n" , moji-0x20);
		}
		else
		{
			printf("エラー表示\n");
		}
	}

} 