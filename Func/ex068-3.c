#include <stdio.h>
main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		putchar(c);
	}
}

//getchar => 全部出力
//putchar => 1文字出力
//1文字ずつ出力を全文字やる