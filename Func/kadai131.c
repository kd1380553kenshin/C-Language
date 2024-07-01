#include <stdio.h>
main()
{
	char moji;
	printf("文字(Ctrl+zで入力終了)？");
	while (scanf("%c", &moji) != EOF)
	{
		printf("%c\n",moji);
		printf("文字(Ctrl+zで入力終了)？");
	}
}								